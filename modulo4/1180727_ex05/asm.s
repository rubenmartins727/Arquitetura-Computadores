.section .text
	.global inc_and_square
	
inc_and_square:

movq (%rdi), %rcx
incq %rcx
movq %rcx, (%rdi)
movl %esi, %eax
imul %eax

ret
