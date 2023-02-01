.section .text
	.global count_odd_matrix
	
count_odd_matrix:

movl %esi, %eax
imull %edx, %eax
imull $4, %eax #size of the array
movl %eax, %ecx
movq $0, %rax

addq %rcx, %rdi #start searching from final

pushq %rbx

loopSearch:
cmpl $0, %ecx
jl end
movl (%rdi), %ebx
andl $1, %ebx
cmpl $1, %ebx
je isOdd
subq $4, %rdi
subl $4, %ecx
jmp loopSearch

isOdd:
incl %eax
subl $4, %ecx
subq $4, %rdi
jmp loopSearch

end:
popq %rbx
ret
