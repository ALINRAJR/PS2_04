
/* Includes ------------------------------------------------------------------*/

/* Private includes ----------------------------------------------------------*/
#include "ps2protocol.h"
#include "extint.h"
#include "gpio.h"
#include "scankeycode.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

swqueue_t ps2queueobj;
uint8_t ps2queuedatabuffer[PS2QUEUEBUFFERSIZE];

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  PS2 Clock interrupt Handler
  * @retval none
  */
void vPS2ClockIntHandler(void)
{
	static uint8_t ps2clkbitcount=0,ps2data=0x00;

	uint32_t ps2datalinestatus=0,ps2clocklinestatus=0;
	ps2clkbitcount++;

	ps2datalinestatus = uiGpioGetPinValue(PS2DATAPORT,PS2DATAPIN);
	ps2clocklinestatus= uiGpioGetPinValue(PS2CLKPORT,PS2CLKPIN);

	switch(ps2clkbitcount)
	{

	case START_BIT:
		/* if it is not a valid start bit making ps2clkbitcount =0 */
		if(ps2datalinestatus!=PIN_LOW && ps2clocklinestatus!=PIN_LOW)
			ps2clkbitcount=0;

		ps2data=0x00;

		break;
	case PARITY_BIT:

		/* DO NOTHING */
		/* Later if required we can implement logic */
		break;
	case STOP_BIT:
		/* Writing into queue is done by ISR thread*/
		ucswqueuewrite(&ps2queueobj,ps2data);
		ps2clkbitcount = 0;
		ps2data = 0x00;

		break;
	default:
   	/*Consider our PS2 data as 0x15 by pressing Q in the keyboard*/
	/* 0x15 ==> 0001 0101 initially data =0x00
	 * D0 bit = 1  data will be shifted 1 bit after that data = 0000 0000>>1 => 0000 0000 |0x80=1000 0000
	 * D1 bit = 0  data will be shifted 1 bit after that data = 1000 0000>>1 => 0100 0000
	 * D2 bit = 1  data will be shifted 1 bit after that data = 0100 0000>>1 => 0010 0000 |0x80=1010 0000
	 * D3 bit = 0  data will be shifted 1 bit after that data = 1010 0000>>1 => 0101 0000
	 * D4 bit = 1  data will be shifted 1 bit after that data = 0101 0000>>1 => 0010 1000 |0x80=1010 1000
	 * D5 bit = 0  data will be shifted 1 bit after that data = 1010 1000>>1 => 0101 0100
	 * D6 bit = 0  data will be shifted 1 bit after that data = 0101 0100>>1 => 0010 1010
	 * D7 bit = 0  data will be shifted 1 bit after that data = 0010 1010>>1 => 0001 0101				 *
	 */
    	ps2data = ps2data>>1;
  	if(ps2datalinestatus)
  		ps2data = ps2data | 0x80;
		break;
	}
}

/**
  * @brief Initializing the PS2 clock as external interrupt and data as digital input
  * @return None
  **/
void vPS2IntInitialize(void)
{
	/* Setting ps2 clock as external interrupt*/
	vExtIntAttachCallback(EINT1,vPS2ClockIntHandler);
	vExtIntInitialize(EINT1);

	/* Setting direction for the ps2 data line as input */
	vGpioSetDir(PS2DATAPORT,PS2DATAPIN,INPUT);

	/* Initializing the ps2 queue object */
	vswqueueinitialize(&ps2queueobj,ps2queuedatabuffer,PS2QUEUEDATASIZE,PS2QUEUEBUFFERSIZE);

}

/**
 * @brief     Decoding the Ps2 device to host scan code
 * @return    returns the value if printable other wise FALSE
 **/

uint8_t ucPs2DevicetoHostDecode(void)
{
		static uint8_t iskeyup=0;
		static PS2KeyStatus_t keystatus;

	uint8_t ps2scandata=0;
	/*Decode the ps2 scan data if we key is not up */
	if(ucswqueueread(&ps2queueobj,&ps2scandata))
	{
		if(!iskeyup)
		{
			switch(ps2scandata)
			{
			case BREAKCODE:
				iskeyup = 1;
				break;
			case LEFTSHIFT:
			case RIGHTSHIFT:
				keystatus.shiftkey = 1;
				break;
			case CAPSLOCK:
				keystatus.capskey ^= 1;
				break;
			case NUMSLOCK:
				keystatus.numkey ^= 1;
				break;
			case ALT:
				keystatus.altkey = 1;
				break;
			case TABS:
				/* DO NOTHING */
				break;
			case CTRLS:
				keystatus.ctlkey = 1;
				break;
			case SCROLL:
				keystatus.scrollkey ^= 1;
				break;
			default:
				switch(keystatus.status)
				{
				case UNSHIFTED:
					return unshiftedllookuptable[ps2scandata];
					break;
				case SHIFTKEY:
					return shiftedllookuptable[ps2scandata];
					break;
				case CAPSKEY:
					return capslookuptable[ps2scandata];
					break;
				case NUMKEY:
					return numlookuptable[ps2scandata];
					break;
				case CTLKEY:
					/* DO NOTHING */
					break;
				case ALTKEY:
					/* DO NOTHING */
					break;
				case TABSKEY:
					/* DO NOTHING */
					break;
				case SCROLLKEY:
					/* DO NOTHING */
					break;
				case SHIFTKEY | CAPSKEY:
					return capsshiftlookuptable[ps2scandata];
					break;
				default:
					break;
				}

			break;
			}

		}
		/*Decode the ps2 scan data if we key is up, ie the data followed by the breakcode is to be ignored */
		else if (iskeyup)
		{
			switch(ps2scandata)
			{
			case LEFTSHIFT:
			case RIGHTSHIFT:
				keystatus.shiftkey = 0;
				break;
			case ALT:
				keystatus.altkey = 0;
				break;
			case CTRLS:
				keystatus.ctlkey = 0;
				break;
			default:
				/*DO NOTHING */
				break;
			}
			iskeyup =0;
		}
	}

 return FALSE;
}




