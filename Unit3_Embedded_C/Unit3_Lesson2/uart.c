
#include "uart.h"

void UART_StringSend(unsigned char * tx_buffer)
{

    while (*tx_buffer != '\0'){
        /*cast to unsigned int because Register is 32 bit wide */
        UART0DR = (unsigned int) * tx_buffer;       /* Transmit*/
        tx_buffer++;                                /* next    */
    }

}