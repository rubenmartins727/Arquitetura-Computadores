.section .data

.global ptrvec, num

.section .text

	.global vec_sum
	
vec_sum:

movq ptrvec(%rip), %rdi
movq $0, %rcx
movq $0, %rax
movw num(%rip), %cx
cmpw $0, %cx 
jle end

sum:
addq (%rdi), %rax
addq $8, %rdi #point to next long
loop sum

end:
ret
