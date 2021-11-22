/* define the entery point for the debugger (not) the cpu */

ENTRY(reset)
MEMORY
{
    ROM (rwx) : ORIGIN = 0x00000000, LENGTH = 64M
}

SECTIONS
{   /* Add this section here 0x10000*/
    . = 0x10000;
    .startup . : 
    {
        /* .text of it, starting with the reset section */
        startup.o(.text)
    }> ROM
    .text : 
    {
        *(.text) *(.rodata)
    }> ROM
    .data :
    {
        *(.data)
    }> ROM
    .bss :
    {
        *(.bss)
    }> ROM
    /* . is a location counter, like variable that counts the space allocated increamnentally*/
    . = . + 0x1000; /* for the stack*/
    stack_top = . ;
}