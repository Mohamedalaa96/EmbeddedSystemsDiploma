/*****************************************************************/
/* Startup code for:  STM32F103C8 ARM-CORTEX M3 based MCU        */
/* By: Mohamed Alaa Sultan (mohmedalaasultan7@gmail.com)         */
/* Version 1.0 
/*****************************************************************/


# make section called vectors
.section .vectors

# add word sized 32 bit data in memory
/* auto copy to SP */
.word 0x20001000            /*Stack top stating of Enterypoint*/
/* Vector Table, address where to jumb */
.word _reset                /* Reset vector */
.word Vector_Handler        /* 2 NMI    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */
.word Vector_Handler        /* 3 HW Fault    */

/* Create .text Section */
.section .text
_reset:  
    bl main
    b .         /* Loop on your self */
.thumb_func     /* use thum instuctions when possible */
/* _reset is not lable, I've not define it as lable !? */
Vector_Handler: 
    b _reset
