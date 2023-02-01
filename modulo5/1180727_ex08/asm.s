.section .text
	.global fill_s2
	
fill_s2:
pushq %rbx
pushq %rcx
movq $3, %rcx
popq %rax

copyString:
movb (%rax), %bl
movb %bl, (%rdi)
incq %rdi
incq %rax
loop copyString

incq %rdi

movq $3, %rcx

copyVector:
movw (%rsi), %bx
movw %bx, (%rdi)
addq $2, %rdi
addq $2, %rsi
loop copyVector

addq $2, %rdi

movl %edx, (%rdi)

end:
movq $0, %rax
popq %rbx
ret
