.section .data

.global ptrvec, num

.section .text

	.global sum_first_byte
	
sum_first_byte:
movq $0, %rax
movq $0, %rcx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

run_vec:
addb (%rdi), %al
addq $8, %rdi
loop run_vec
movsbl %al, %eax

fim:
ret