/*
===============================================================================
 Name        : 24_Day56_08112021_PS2004.c

 Description : Program demonstrate PS2 device to host communication -
  	  	  	   decoding the dat from the software circular queue and displaying the
  	  	  	   pressed key in the LCD
 TESTCASE3   : Interrupt configured for EDGE_SENSITIVE and FALLING_EDGE

 TODO        :

 Layered Architecture used for this project
 ************************************
 Application layer-24_Day56_08112021_PS2004.c
 ************************************
 Board layer - ps2protocol.c/.h, configboard.h
 ************************************
 Low level drivers or chip level - pinmux.c/.h,extint.c/.h, gpio.c/.h
 ************************************
 Hardware
 ************************************

===============================================================================
*/

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "pinmux.h"
#include "lcd.h"
#include "ps2protocol.h"
#include "swqueue.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  Initialize all the hardware connected
  * @retval none
  */
void vAppHardwareInit(void)
{
	vPinmuxInitialize();
	vLCDInitialize();
	vLCDInitialCommands();
	vPS2IntInitialize();
}

/**
  * @brief  Crude Delay
  * @retval none
  */
void vAppDelay(uint32_t count)
{
	int i,j;
	for(i=0;i<count;i++)
		for(j=0;j<0xA00;j++);
}

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* MCU Configuration--------------------------------------------------------*/
   uint8_t dispkeyvalue=0;
  /* Initialize all configured peripherals */
   vAppHardwareInit();
   vLCDPrintf("PS2 TEST");

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {
	  if(dispkeyvalue=ucPs2DevicetoHostDecode())
	  		{
	  			vLCDGotoxy(LINE1, COL0);
	  			vLCDPrintf("%c", dispkeyvalue);
	  		}
  }
  /* End of Application entry point */
}




