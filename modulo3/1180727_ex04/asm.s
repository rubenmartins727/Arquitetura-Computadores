.section .bss

.global ptrvec, num
.comm ptrvec, 8 

.section .text

	.global vec_add_two
	
vec_add_two:

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx 
jle end

addTwo:
addl $2, (%rdi)
addq $4, %rdi #point to next int
loop addTwo

end:
ret
