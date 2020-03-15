	;; -------------------------------------------------------------------------------------------
	;; Writes "Hello, Holberton to the console using only system calls, Runs on 64-bit Linux only.
	;; To assemble an run:
	;;
	;;
	;; nasm -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o -o hello ./hello
	;; -------------------------------------------------------------------------------------------

	global     main

	section    .text

main:
	mov         rax, 1	; system call for writte
	mov         rdi, 1	; file handle 1 is stdout
	mov         rsi, msg 	; address of string to output
	mov         rdx, msglen	 ; number of bytes
	syscall			 ; invoke operating system to do the write
	mov         rax, 60	 ; system call for exit
	xor         rdi, 0	 ; exit code 0
	syscall			 ; invoke operating system to exit

	section     .data
msg:	db          "Hello, Holberton", 10 ; note the newline at the end
msglen:	equ $ -msg
