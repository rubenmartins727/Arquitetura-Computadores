.section .text
	.global count_bits_one
	
count_bits_one:

movl $0, %eax
movl $0, %edx

loop_bits:

cmpl $0, %edi
je end
pushq %rdi
andl $1, %edi
cmpl $1, %edi
jne next
incl %eax

next:
popq %rdi
shrl %edi 
jmp loop_bits

end:
ret
