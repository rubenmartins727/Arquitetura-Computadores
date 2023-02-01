.section .data

.global ptrvec, num, x

.section .text

	.global exists
	
exists:
movq $0, %rax
movq $0, %rcx
movl x(%rip), %ebx
pushq %rbx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

search:
cmpl %ebx, (%rdi)
je found
addq $4, %rdi
loop search
jmp fim

found:
movl $1, %eax

fim:
popq %rbx
ret