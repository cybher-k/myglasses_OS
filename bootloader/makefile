all: bootloader.bin

bootloader.bin: main.o
	ld -T linker.ld -o bootloader.elf main.o
	objcopy -O binary bootloader.elf bootloader.bin

main.o: main.c
	gcc -c -ffreestanding -o main.o main.c

clean:
	rm -f *.o *.elf *.bin
