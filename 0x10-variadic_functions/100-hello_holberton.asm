	;; -------------------------------------------------------------------------------------------
	;; Writes "Hello, Holberton to the console using only system calls, Runs on 64-bit Linux only.
	;; To assemble an run:
	;;
	;;
	;; nasm -felf65 100-hello_holberton.asm ./out
	;; -------------------------------------------------------------------------------------------

	global     _start

	section    .text
	mov         rax, 1	; system call for writte
	mov         rdi, 1	; file handle 1 is stdout
	mov         rsi, message ; address of string to output
	mov         rdx, 13	 ; number of bytes
	syscall			 ; invoke operating system to do the write
	mov         rax, 60	 ; system call for exit
	xor         rdi, rdi	 ; exit code 0
	syscall			 ; invoke operating system to exit

	section     .data
	db          "Hello, Holberton" 10 ; note the newline at the end
