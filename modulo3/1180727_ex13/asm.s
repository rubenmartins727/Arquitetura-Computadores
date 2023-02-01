.section .data

.global ptrvec, num

.section .text

	.global keep_positives
	
keep_positives:
movq $0, %rax
movq $0, %rcx
movw $-1, %bx
pushq %rbx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

search:
cmpw $0, (%rdi)
jl toPositive
addq $2, %rdi
loop search
jmp fim

toPositive:
movw (%rdi), %ax
mulw %bx
movw %ax, (%rdi)
addq $2, %rdi
loop search

fim:
movq $0, %rax
popq %rbx
ret