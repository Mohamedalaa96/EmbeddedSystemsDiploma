#Mohamed ALaa 
#Rule: Dependencies 


all: startup.s main.c uart.c 
	echo "Building All"
	arm-none-eabi-gcc -c -I -g -mcpu=arm926ej-s main.c -o main.o
	arm-none-eabi-gcc -c -I -g -mcpu=arm926ej-s uart.c -o uart.o
	arm-none-eabi-as -mcpu=arm926ej-s -g startup.s -o startup.o
	arm-none-eabi-ld -T linker_script.ld startup.o main.o uart.o -o application.elf -Map=Map_file.map

clean_all: 
	rm *.o

clean: 
	rm startup.o main.o uart.o
	

