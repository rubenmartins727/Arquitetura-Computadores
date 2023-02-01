.section .data

A:
    .int 0

B:
    .int 0

.global i
.global A, B


.section .text

	.global operation
	
operation:

movl i(%rip), %eax
movl i(%rip), %ecx
mull %ecx
movl A(%rip), %ecx
mull %ecx
mull %ecx
movl B(%rip), %ecx
divl %ecx

ret
