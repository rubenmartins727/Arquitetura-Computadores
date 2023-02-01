.section .text
	.global reset_bit
	
reset_bit:

movl $0, %eax
movl $0, %edx

pushq %rsi
movl $1, %edx
movl %esi, %ecx
shll %ecx, %edx #if pos(%esi) = 2, mascara = 0100

andl %edx, %edi # %edi= 0100
movl %edi, %ecx
popq %rdi
xorl %edi, %ecx # %ecx = 0001 0000 xor(num iguais fica a 0)
cmpl %edi, %ecx
je return0
movl $1, %eax
jmp end

return0:
movl $0, %eax


end:
ret
