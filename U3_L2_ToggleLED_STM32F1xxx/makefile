# Startup File for STM32F103C8 ARM-CORTEX M3 based MCU
#By: Mohamed Alaa Sultan (mohmedalaasultan7@gmail.com)
#Rule: Dependencies (if any thing changed)

CC= arm-none-eabi
# -gdwarf-2 debug info could be read by proteus 
C_FLAGS= -mcpu=cortex-m3 -gdwarf-2  
INCS = -I . 
OUTPUT_FILE = application
LIB = #already built libraries
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

AS_SRC = $(wildcard *.s)
AS_OBJ = $(AS_SRC:.s=.o)	#Replace the .s with .o from AS_SRC macro

# $< works with only one dependenecy(1st one)
all: $(OUTPUT_FILE).bin
#all is the default target.

#For all .s files, dependent on the .s to generate .o rule
%.o: %.s 
	$(CC)-as $(C_FLAGS) $< -o $@

#for all .c files dependenet on .o file with same name
%.o: %.c
	$(CC)-gcc $(C_FLAGS) $(INCS) -c  $< -o $@

$(OUTPUT_FILE).elf:  $(OBJ) $(AS_OBJ)
	$(CC)-ld -T Linker_Script.ld $(OBJ) $(AS_OBJ) $(LIB)  -o $@ -Map=Map_file.map

$(OUTPUT_FILE).bin: $(OUTPUT_FILE).elf
	$(CC)-objcopy -O binary $<  $@
	@echo "Build is Done!"


clean: 
# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#$(RM) remove command
	@echo "Cleaning All"
	$(RM) count *.o *~ *.bin *.elf
	

