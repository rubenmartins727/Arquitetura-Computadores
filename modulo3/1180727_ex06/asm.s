.section .data

.global ptr1

.section .text

	.global encrypt
	
encrypt:

movq ptr1(%rip), %rdi
movq $0, %rcx
movq $0, %rax

str_loop:

movb (%rdi), %cl
cmpb $'a', %cl
je continue
cmpb $' ', %cl
je continue
cmpb $0, %cl
je end
incq (%rdi)
incq (%rdi)
incq (%rdi)
incl %eax

continue:
incq %rdi
jmp str_loop

end:
ret
