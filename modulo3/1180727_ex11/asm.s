.section .data

.global ptrvec, num

.section .text

	.global vec_greater10
	
vec_greater10:
movq $0, %rax
movq $0, %rcx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

search:
cmpl $10, (%rdi)
jg increment
addq $4, %rdi
loop search
jmp fim

increment:
incl %eax
addq $4, %rdi
loop search

fim:
ret