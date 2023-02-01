.section .data

.global A
.global B
.global C
.global D

.section .text

	.global sum_and_subtract
	
sum_and_subtract:

movsbw C(%rip), %ax
movsbw D(%rip), %cx
subw %cx, %ax
movw B(%rip), %cx
addw %cx, %ax
cwde  
movl A(%rip), %ecx
addl %ecx, %eax
cdq


ret
