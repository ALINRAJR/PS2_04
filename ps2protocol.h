
#ifndef PS2PROTOCOL_H_
#define PS2PROTOCOL_H_

/* Private includes ----------------------------------------------------------*/
#include "configboard.h"
#include "swqueue.h"
/* Private typedef -----------------------------------------------------------*/
enum {START_BIT=1,PARITY_BIT=10,STOP_BIT=11};
enum {BREAKCODE=0xF0,LEFTSHIFT=0x12, RIGHTSHIFT=0x59, CAPSLOCK=0x58,NUMSLOCK=0x77,
	          ALT=0x11,TABS =0x0D, CTRLS=0x14, SCROLL=0x5F};

enum {UNSHIFTED=0x00,SHIFTKEY=0x01,CAPSKEY=0x02,NUMKEY=0x04,CTLKEY=0x08,ALTKEY=0x10,TABSKEY=0x20,SCROLLKEY=0x40};
/* Private define ------------------------------------------------------------*/

#define PS2QUEUEBUFFERSIZE  10
/* Size of a ps2 scan code is 1 byte */
#define PS2QUEUEDATASIZE    1
/* Private macro -------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
typedef struct {
	union {
		uint8_t status;
		struct {
			uint8_t shiftkey  :1; // status 0th bit
			uint8_t capskey   :1; // status 1st bit
			uint8_t numkey    :1; // status 2nd bit
			uint8_t ctlkey    :1; // status 3rd bit
			uint8_t altkey    :1; // status 4th bit
			uint8_t tabskey   :1; // status 5th bit
			uint8_t scrollkey :1; // status 6th bit
			uint8_t reserved  :1; // status 7th bit
		};
	};
}PS2KeyStatus_t;

extern swqueue_t ps2queueobj;
extern uint8_t ps2queuedatabuffer[PS2QUEUEBUFFERSIZE];
/**
  * @brief Initializing the PS2 clock as external interrupt and data as digital input
  * @return None
  **/
void vPS2IntInitialize(void);

/**
 * @brief     Decoding the Ps2 device to host scan code
 * @return    returns the value if printable other wise FALSE
 **/

uint8_t ucPs2DevicetoHostDecode(void);


#endif /* PS2PROTOCOL_H_ */
