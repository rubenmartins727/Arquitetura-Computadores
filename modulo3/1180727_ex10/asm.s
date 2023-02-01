.section .data

.global ptr1, ptr2, ptr3

.section .text

	.global str_cat
	
str_cat:
movq $0, %rax
movq $0, %rcx
movq ptr3(%rip), %rsi
movq ptr1(%rip), %rdi

run_str1:
movb (%rdi), %cl
cmpb $0, %cl
je next_str
movb %cl, (%rsi)
incq %rdi
incq %rsi
jmp run_str1

next_str:
movq $0, %rcx
movq ptr2(%rip), %rdi

concat:
movb (%rdi), %cl
cmpb $0, %cl
je end
movb %cl, (%rsi)
incq %rdi
incq %rsi
jmp concat

end:
movb $0, (%rsi)
ret