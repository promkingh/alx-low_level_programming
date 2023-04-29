		extern printf		; declare printf


section .text
global main		; entry point

main:
		
		push	rbp
		mov	rdi, fmt		; format 
		mov	rsi, msg		; argument string
		mov	rax, 0			;
		call	printf			; invoke printf

		pop	rbp			; restore stack

		mov	rax, 0
		ret

section .data
msg:		db "Hello, Holberton", 0	; argument string to print
fmt:		db "%s" , 10, 0		; format
