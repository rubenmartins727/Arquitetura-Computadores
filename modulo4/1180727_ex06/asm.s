.section .text
	.global test_equal
	
test_equal:
pushq %rbx

test_equal_start:
movb (%rdi), %cl
movb (%rsi), %bl
cmpb %cl, %bl
je equal
jmp notEqual

equal:
cmpb $0, %cl
je compEndStrings
cmpb $0, %bl
je notEqual
incq %rdi
incq %rsi
jmp test_equal_start

compEndStrings:
cmpb $0, %bl
je endStringsEqual
jmp notEqual

endStringsEqual:
movl $1, %eax
jmp end

notEqual:
movl $0, %eax

end:
popq %rbx
ret
