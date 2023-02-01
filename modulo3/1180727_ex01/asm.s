.section .bss

.global ptr1
.comm ptr1, 8

.section .text

	.global seven_count
	
seven_count:

movq ptr1(%rip), %rsi

str_loop:

movb (%rsi), %cl
cmpb $0, %cl
jz end
cmpb $'7', %cl
je increment
incq %rsi
jmp str_loop

increment:
incl %eax
incq %rsi
jmp str_loop

end:
ret
