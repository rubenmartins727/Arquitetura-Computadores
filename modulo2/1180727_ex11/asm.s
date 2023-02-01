.section .data

.global op1
.global op2

.section .text

	.global test_flags
	
test_flags:

movl op1(%rip), %eax
movl op2(%rip), %ecx
addl %ecx, %eax
jo flag_overflow
jc flag_carry
movb $0, %al
jmp end

flag_overflow:
movl $0, %eax
movb $1, %al
jmp end

flag_carry:
movl $0, %eax
movb $1, %al
jmp end

end:
ret
