.section .bss

.global ptr1, ptr2
.comm ptr1, 8
.comm ptr2, 8

.section .text

	.global str_copy_porto
	
str_copy_porto:

movq ptr1(%rip), %rsi
movq ptr2(%rip), %rdi

str_loop:

movb (%rsi), %cl
cmpb $0, %cl
jz end
cmpb $'o', %cl
je change
movb %cl, (%rdi)
incq %rsi
incq %rdi
jmp str_loop

change:
movb $'u', (%rdi)
incq %rsi
incq %rdi
jmp str_loop

end:
ret
