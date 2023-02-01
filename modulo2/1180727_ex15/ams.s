.section .data

.global A
.global B
.global C
.global D

.section .text

	.global compute 
	
compute:

movl A(%rip), %eax
movl B(%rip), %ecx
mull %ecx, %eax
movl C(%rip), %ecx
subl %ecx, %eax
movl D(%rip), %ecx
divl %ecx

ret
