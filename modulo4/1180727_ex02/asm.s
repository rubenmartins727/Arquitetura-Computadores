.section .data
	.global n

.section .text
	.global sum_n2
	
sum_n2:
movq $0, %rax
movq $0, %rcx
movq $0, %rdx
movl %edi, %edx
movl %edi, %ecx
cmpl $0, %ecx
jle end

sum:
movl %ecx, %edx
imull %ecx, %edx
addl %edx, %eax
loop sum

	
end:   
cdqe
ret
