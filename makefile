run:
	clang -m32 -c kernel/core/kernel.c -o kernel.o -ffreestanding -nostdlib -O2
	ld -m elf_i386 -T link.ld -o kernel.bin kernel.o --oformat elf32-i386
	echo "linled and make project"
	mkdir -p isodir/boot/grub
	cp kernel.bin isodir/boot/
	cp grub.cfg isodir/boot/grub/
	echo "grub is a ready"
	
	echo "crate a ISO file"
	grub-mkrescue -o myos.iso isodir

	echo "run"
	qemu-system-x86_64 myos.iso

clean:
	rm -rf kernel.o kernel.bin myos.iso isodir

