#Mohamed ALaa 
#Rule: Dependencies (if any thing changed)

CC= arm-none-eabi
C_TARGET= -mcpu=arm926ej-s 
C_FLAGS = -c -g
INCS = -I . 
OUTPUT_FILE = application

startup.o: startup.s 
	$(CC)-as $(C_TARGET) -g startup.s -o startup.o

main.o: main.c
	$(CC)-gcc $(C_FLAGS) $(C_TARGET) main.c -o main.o

uart.o: uart.c
	$(CC)-gcc $(C_FLAGS) $(C_TARGET) uart.c -o uart.o

$(OUTPUT_FILE).elf: startup.o uart.o main.o
	$(CC)-ld -T linker_script.ld startup.o main.o uart.o -o $(OUTPUT_FILE).elf -Map=Map_file.map

$(OUTPUT_FILE).bin: $(OUTPUT_FILE).elf
	$(CC)-objcopy -O binary $(OUTPUT_FILE).elf  $(OUTPUT_FILE).bin

clean_all: 
	rm *.o *.bin *.elf

clean: 
	rm startup.o main.o uart.o
	

