.section .data

.global x, ptrvec, num

.section .text

	.global vec_search
	
vec_search:
movq $0, %rax
movq $0, %rcx

movq ptrvec(%rip), %rdi
movl num(%rip), %ecx
cmpl $0, %ecx
jle end

search:

movw x(%rip), %ax
cmpw (%rdi), %ax
je found
addq $2, %rdi
loop search
movw $0, %ax
jmp end

found:
movq %rdi, ptrvec(%rip)
movw ptrvec(%rip), %ax 

end:
ret
