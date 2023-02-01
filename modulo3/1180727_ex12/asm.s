.section .data

.global ptrvec, num

.section .text

	.global vec_zero
	
vec_zero:
movq $0, %rax
movq $0, %rcx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

search:
cmpl $100, (%rdi)
jge toZero
addq $4, %rdi
loop search
jmp fim

toZero:
movl $0, (%rdi)
incb %al
addq $4, %rdi
loop search

fim:
ret