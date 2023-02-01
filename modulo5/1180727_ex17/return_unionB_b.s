.section .text
	.global return_unionB_b
	
return_unionB_b:

movq %rsi, %rax
imulq $8, %rax
addq %rax, %rdi
movq (%rdi), %r8
movq %rdx, %rax
imull $32, %rax
addq %rax, %r8

movq $32, %rcx #size struct
mulq %rcx #pointer to structA to search
movq %rax, %rcx
movq $0, %rax

addq %rcx, %rdi #start 

addq $24, %rdi #unionB

pushq %rbx

movq (%rdi), %rbx
movb %bl, %al

popq %rbx
ret