.section .text
	.global greatest
	
greatest:

pushq %rdi
pushq %rsi
pushq %rdx
pushq %rcx
movl $4, %ecx

	
loop:	
popq %rbx
cmpq %rax, %rbx
jg substitute
loop loop
jmp end

substitute:
movq %rbx, %rax
loop loop

end:
movq $0, %rbx
ret
