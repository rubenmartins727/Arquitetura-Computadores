.section .data

.global ptrvec, num, ptrvec_temp

.section .text

	.global array_sort
	
array_sort:
movq $0, %rax
movq $0, %rcx

movq ptrvec(%rip), %rdi #vetor com 8 shorts
movq ptrvec_temp(%rip), %rsi #vetor vazio
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

movw (%rdi), %ax
movw %ax, (%rsi)

run_vec:
addq $2, %rdi
movw (%rdi), %ax
cmpw (%rsi), %ax
jg swap
addq $2, %rsi
movw %ax, (%rsi)
addq $2, %rdi
loop run_vec
jmp fim

swap:
movw (%rsi), %bx
pushq %rbx
movw %ax, (%rsi)
addq $2, %rsi
movw %bx, (%rsi)
popq %rbx
loop run_vec

fim:
ret