.section .text
	.global update_grades
	
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
