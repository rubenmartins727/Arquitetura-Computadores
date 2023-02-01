.section .text
	.global update_address
	
update_address:

addq $84, %rdi

copyString:
cmpb $0, (%rsi)
je toZeros
movb (%rsi), %cl
movb %cl, (%rdi)
incq %rsi
incq %rdi
jmp copyString

toZeros:
cmpb $0, (%rdi)
je end
movb $0, (%rdi)
incq %rdi
jmp toZeros

end:
ret
