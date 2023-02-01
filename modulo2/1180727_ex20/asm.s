.section .data

.global num

.section .text

	.global check_num
	
check_num:

movl num(%rip), %eax
movl $2, %ecx
divl %ecx
cmpl $0, %edx
je isEven
jne isOdd

isEven:
movl num(%rip), %eax
cmpl $0, %eax
jl isEvenNegative
jg isEvenPositive


isOdd:
movl num(%rip), %eax
cmpl $0, %eax
jl isOddNegative
jg isOddPositive

isEvenNegative:
movl $0, %eax
movb $4, %al
jmp end

isEvenPositive:
movl $0, %eax
movb $6, %al
jmp end

isOddNegative:
movl $0, %eax
movb $5, %al
jmp end

isOddPositive:
movl $0, %eax
movb $7, %al
jmp end

end:
ret
