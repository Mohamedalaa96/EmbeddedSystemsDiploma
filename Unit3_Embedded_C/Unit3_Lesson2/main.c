
#include"uart.h"

/* automatically intialized with Zero in .bss */
unsigned char transmission_buffer[100] = "Learn-in-depth:<Mohamed Alaa>";

void main(void){

    UART_StringSend(transmission_buffer);

}

