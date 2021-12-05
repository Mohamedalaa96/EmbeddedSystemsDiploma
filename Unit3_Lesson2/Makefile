#Mohamed ALaa 
#Rule: Dependencies 

CC= arm-none-eabi
C_TARGET= -mcpu=arm926ej-s 
C_FLAGS = -c -g
INCS = -I . 
OUTPUT_FILE = application


all: startup.s main.c uart.c 
	echo "Building All"
	$(CC)-gcc $(C_FLAGS) $(C_TARGET) main.c -o main.o
	$(CC)-gcc $(C_FLAGS) $(C_TARGET) uart.c -o uart.o
	$(CC)-as $(C_TARGET) -g startup.s -o startup.o
	$(CC)-ld -T linker_script.ld startup.o main.o uart.o -o $(OUTPUT_FILE).elf -Map=Map_file.map
	$(CC)-objcopy -O binary $(OUTPUT_FILE).elf  $(OUTPUT_FILE).bin

clean_all: 
	rm *.o *.bin *.elf

clean: 
	rm startup.o main.o uart.o
	

