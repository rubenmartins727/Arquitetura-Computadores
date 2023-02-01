.section .data

.global num

.section .text

	.global steps
	
steps:

movq num(%rip), %rax
movl $3, %ecx
mull %ecx
addl $6, %eax
movl $3, %ecx
divl %ecx
addl $12, %eax
subq num(%rip), %rax
subl $1, %eax


ret
