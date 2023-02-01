.section .data

.global length1
.global length2
.global height

.section .text

	.global getArea
	
getArea:

movl length1(%rip), %eax
movl length2(%rip), %ecx
addl %ecx, %eax
movl height(%rip), %ecx
mull %ecx
movl $2, %ecx
divl %ecx

ret
