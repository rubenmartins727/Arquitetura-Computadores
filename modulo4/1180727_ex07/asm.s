.section .text
	.global count_odd
	
count_odd:
pushq %rbx
movq $0, %rdx
movq $0, %rax
movl %esi, %ecx
cmpl $0, %ecx
je end

findOdds:
movb (%rdi), %al
cbw
movb $2, %bl
divb %bl
cmpb $0, %ah
jne isOdd
incq %rdi
loop findOdds
jmp end

isOdd:
incl %edx
incq %rdi
loop findOdds

end:
movq $0, %rax
movl %edx, %eax
movq $0, %rdx
popq %rbx
ret
