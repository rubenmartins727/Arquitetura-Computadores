.section .data

length1:
    .int 0
length2:
    .int 0
height:
    .int 0

.global length1, length2, height

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
