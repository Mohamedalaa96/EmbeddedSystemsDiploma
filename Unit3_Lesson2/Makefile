#Mohamed ALaa 
#Rule: Dependencies (if any thing changed)

CC= arm-none-eabi
C_TARGET= -mcpu=arm926ej-s 
C_FLAGS = -c -g
INCS = -I . 
OUTPUT_FILE = application
LIB = #already built libraries
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# $< works with only one dependenecy(1st one)
all: $(OUTPUT_FILE).bin
#all is the default target.

startup.o: startup.s 
	$(CC)-as $(C_TARGET) -g $< -o $@

#for all .c files dependenet on .o file with same name
%.o: %.c
	$(CC)-gcc $(C_FLAGS) $(C_TARGET) $< -o $@

$(OUTPUT_FILE).elf:  $(OBJ) startup.o
	$(CC)-ld -T linker_script.ld $(OBJ) startup.o $(LIB)  -o $@ -Map=Map_file.map

$(OUTPUT_FILE).bin: $(OUTPUT_FILE).elf
	$(CC)-objcopy -O binary $<  $@


clean: 
# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#$(RM) remove command
	@echo "Cleaning All"
	$(RM) count *.o *~ *.bin *.elf
	

