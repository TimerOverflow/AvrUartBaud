#include <iom64.h>
#include <ina90.h>
#include "AvrUartBaud.h"

#define  __CPU_CLK__        14745600L   //14.7456Mhz

tag_UartBaudControl Uart0Baud;

void main( void )
{
  AvrUartBaudControlInit(&Uart0Baud, __CPU_CLK__, (char *) &UBRR0L, (char *) &UBRR0H);
  //init uart0 baudrate.
  
  while(1)
  {
    AvrUartBaudChange(&Uart0Baud, BAUD_9600);
    //setting baudrate 9600bps
  }
}
