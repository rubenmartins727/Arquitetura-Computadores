.section .data
	.global x

.section .text
	.global cube
	
cube:
movl %edi, %eax
imull %edi, %eax
imull %edi, %eax
cdqe
	
ret
