# Startup file , global lable
.globl reset

reset: 
    ldr sp, =stack_top
    bl main
exit: 
    bl exit

