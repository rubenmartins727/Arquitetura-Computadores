.section .text
	.global sum_smaller
	
sum_smaller:

movl %edi, %eax
cmpl %eax, %esi
jg smaller
addl %esi, %eax

smaller:
movq %rax, (%rdx)
addl %esi, %eax

ret
