.section .text
	.global activate_bits
	
activate_bits:

movl %edx, %ecx
movl $1, %eax

activateRight:


loop activateRight


end:
ret
