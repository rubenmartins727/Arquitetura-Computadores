.section .data

	.global a
	.global b
	
.section .text

	.global sum
	.global subtraction
	.global multiplication
	.global division
	.global modulus
	.global power2
	.global power3 

sum:
movl a(%rip), %eax
movl b(%rip), %ecx
addl %ecx, %eax
jmp end

subtraction:
movl a(%rip), %eax
movl b(%rip), %ecx
subl %ecx, %eax
jmp end

multiplication:
movl a(%rip), %eax
movl b(%rip), %ecx
mull %ecx
jmp end

division:
movl a(%rip), %eax
movl b(%rip), %ecx
divl %ecx
jmp end

modulus:
movl a(%rip), %eax
movl b(%rip), %ecx
addl %ecx, %eax
cmpl $0, %eax
jl toPositive

jmp end

toPositive:
movl $-1, %ecx
mull %ecx
jmp end

power2:
movl a(%rip), %eax
movl a(%rip), %ecx
mull %ecx
jmp end

power3:
movl a(%rip), %eax
movl a(%rip), %ecx
mull %ecx
mull %ecx
jmp end

end:
ret