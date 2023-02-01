.section .text
	.global greater_date
	
greater_date:
pushq %rbx

movl %edi, %ebx
shrl $8, %ebx #year in %bx(16-bit)

movl %esi, %ecx
shrl $8, %ecx #year in %cx(16-bit)

cmpw %bx, %cx
je compareMonth
cmpw %bx, %cx
jg returnDate2
movl %edi ,%eax
jmp end

compareMonth:
popq %rbx
pushq %rbx
movl %edi, %ebx
movl %esi, %ecx
cmpb %bl, %cl
je compareDay
cmpb %bl, %cl
jg returnDate2
movl %edi ,%eax
jmp end

compareDay:
popq %rbx
movl %edi, %ebx
shrl $24, %ebx
movl %esi, %ecx
shrl $24, %ecx
cmpb %bl, %cl
jg returnDate2
movl %edi ,%eax
jmp end


returnDate2:
movl %esi ,%eax


end:
popq %rbx
ret
