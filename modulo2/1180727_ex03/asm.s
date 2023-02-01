.section .data

	.global op1
	.global op2

CONST:
	.int 20

.section .text

	.global sum_v2
	
sum_v2:

movl CONST(%rip), %eax
movl op1(%rip), %ecx
subl %ecx, %eax
subl %ecx, %eax
movl op2(%rip), %ecx
addl %ecx, %eax

ret
