nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o
ld -m elf_i386 -T link.ld -o noname/boot/kernel.bin kasm.o kc.o
grub-mkrescue -o noname.iso noname/
/usr/lib/virtualbox/VirtualBox --comment "noname" --startvm "875a9222-a321-4d80-a9bc-32dab423ea14"

read a
$SHELL  