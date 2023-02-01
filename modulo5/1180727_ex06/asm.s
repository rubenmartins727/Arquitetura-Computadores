.section .text
	.global update_grades, locate_greater
	
update_grades:

addq $4, %rdi
movq $5, %rcx #number of elements

copyGrades:
movl (%rsi), %eax
movl %eax, (%rdi)
addq $4, %rdi
addq $4, %rsi
loop copyGrades

end:
movq $0, %rax
ret

locate_greater:
movq $0, %rax
addq $4, %rdi
movq $5, %rcx #number of elements
pushq %rbx

compareGrades:
movl (%rdi), %ebx
cmpl %esi, %ebx
jg greaterGrade
addq $4, %rdi
loop compareGrades
jmp end2


greaterGrade:
movl %ebx, (%rdx)
addq $4, %rdx
addq $4, %rdi
incl %eax
loop compareGrades

end2:
popq %rbx
ret
