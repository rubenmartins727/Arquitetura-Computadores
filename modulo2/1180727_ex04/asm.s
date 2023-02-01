.section .data

op3:
	.long 0

op4: 
	.long 0
	
.global op1, op2, op3, op4

.section .text

	.global sum_v3
	
sum_v3:

movl op4(%rip), %eax
movl op3(%rip), %ecx
addl %ecx, %eax
movl op2(%rip), %ecx
subl %ecx, %eax
subl %ecx, %eax
movl op1(%rip), %ecx
addl %ecx, %eax
addl %ecx, %eax

ret
