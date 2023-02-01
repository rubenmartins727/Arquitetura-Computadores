.section .text
	.global approved_semester
	
approved_semester:
pushq %rbx
movq $0, %rax

movw (%rdi), %r9w
addq $8, %rdi #grades

countApprovements:
cmpw $0, %r9w
je end
movl $0, %r8d
movw (%rdi), %bx
movq $16, %rcx

perStudent:
movw %bx, %dx
andw $1, %dx
cmpw $1, %dx
jne moduleNotApproved
incl %r8d
shrw %bx
loop perStudent

check:
cmpl $10, %r8d
jge approved

decw %r9w
addq $2, %rdi
jmp countApprovements

moduleNotApproved:
shrw %bx
loop perStudent
jmp check

approved:
incl %eax
decw %r9w
addq $2, %rdi
jmp countApprovements

end:
popq %rbx
ret