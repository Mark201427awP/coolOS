run:
	gcc -m32 -c kernel/core/kernel.c -o kernel.o -ffreestanding -nostdlib -O2
	ld -m elf_i386 -T link.ld -o kernel.bin kernel.o --oformat elf32-i386

	mkdir -p isodir/boot/grub
	cp kernel.bin isodir/boot/
	cp grub.cfg isodir/boot/grub/

	# Создаем ЗАГРУЗОЧНЫЙ ISO
	grub-mkrescue -o myos.iso isodir

	# Запускаем
	qemu-system-x86_64 myos.iso



	vncviewer localhost:5900 &

clean:
	rm -rf kernel.o kernel.bin myos.iso isodir

view:
	vncviewer localhost:5900 &
