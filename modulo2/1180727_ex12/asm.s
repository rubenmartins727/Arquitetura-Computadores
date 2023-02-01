.section .data

.global A
.global B

.section .text

	.global isMultiple
	
isMultiple:

movl B(%rip), %eax #dividendo
movl A(%rip), %ecx #divisor
divl %ecx #quociente em eax
cmpl $0, %eax
je multiple
jg notMultiple


multiple:
movb $1, %al
jmp end

notMultiple:
movb $0, %al
jmp end

end:
ret
