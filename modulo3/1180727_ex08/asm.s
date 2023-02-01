.section .data

.global even, ptrvec, num

.section .text

	.global test_even, vec_sum_even
	
test_even:

movq $0, %rax
movq $0, %rcx
movq even(%rip), %rax
movq $2, %rcx
divq %rcx
cmpq $0, %rdx
je isEven
movq $0, %rax
jmp end

isEven:
movq $1, %rax
jmp end

end:
ret

vec_sum_even:
movq $0, %rax
movq $0, %rcx
movq $0, %rdx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle fim

sum_evens:
movq (%rdi), %rax
movq %rax, even(%rip)
call test_even
cmpq $1, %rax
je sum
addq $8, %rdi #point to next long
loop sum_evens
jmp fim

sum:
addq (%rdi), %rdx
addq $8, %rdi
jmp sum_evens

fim:
ret
