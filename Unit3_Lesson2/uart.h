#ifndef __UART_H__
#define __UART_H__


/* Data buffer for TX */
/* cast again to unsigned int * to acknolage the compiler that this is an address */
#define UART0DR (* ((volatile unsigned int * ) ((unsigned int *) 0x101F1000)) )


void UART_StringSend(unsigned char * buffer);




#endif