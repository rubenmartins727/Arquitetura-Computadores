.section .data

.global s

.section .text

	.global swapBytes
	
swapBytes:

movw s(%rip), %ax
movb %ah, %bh
cbw
movb $3, %cl
divb %cl
movb %bh, %ah

ret
