.section .text
	.global fill_s1
	
fill_s1:

movb %dl, (%rdi)
addq $4, %rdi
movl %esi, %eax
movl %eax, (%rdi)
addq $4, %rdi
movb %r8b, (%rdi)
addq $4, %rdi
movl %ecx, (%rdi)

end:
movq $0, %rax
ret
