/*****************************************************************/
/* Linker Script for:  STM32F103C8 ARM-CORTEX M3 based MCU        */
/* By: Mohamed Alaa Sultan (mohmedalaasultan7@gmail.com)         */
/* Version 1.0 
/*****************************************************************/

/* define the entery point for the debugger (not) the cpu */

MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 128k
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 20k
}


SECTIONS
{   /* Add this section here 0x10000*/
    .text : 
    {
        /* .text of it, starting with the reset section */
        *(.vectors*)
        *(.text*)
        *(.rodata)
    }> FLASH
    .data : {
        *(.data)
    }> FLASH
    .bss :
    {
        *(.bss*)
    }> SRAM
    
}

