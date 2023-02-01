.section .text
	.global fun1, fun2, fun3, fun4
	
fun1:

movq $0, %rax
addq $4, %rdi
movw (%rdi), %ax

ret

fun2:

movq $0, %rax
addq $24, %rdi
movw (%rdi), %ax

ret

fun3:

movq $0, %rax
addq $24, %rdi
movq %rdi, %rax

ret

fun4:

movq $0, %rax
addq $8, %rdi
movq (%rdi), %rcx
addq $4, %rcx
movw (%rcx), %ax

ret