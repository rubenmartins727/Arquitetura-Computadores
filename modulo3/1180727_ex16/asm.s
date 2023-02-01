.section .data

.global ptr1, ptr2, num

.section .text

	.global swap
	
swap:
movq $0, %rax
movq $0, %rcx

movq ptr1(%rip), %rdi
movq ptr2(%rip), %rsi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

run_vec:
movb (%rdi), %al
movb (%rsi), %bl
pushq %rbx
movb %bl, (%rdi)
movb %al, (%rsi)
popq %rbx
incq %rdi
incq %rsi
loop run_vec

fim:
ret