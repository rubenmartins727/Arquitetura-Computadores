.section .data

constante1:
	.int 2
constante2:
	.int 4

.section .text
	.global calc
	
calc:
movl %edi, %eax
imul constante1(%rip), %eax
movl (%rsi), %ecx
subl %ecx, %eax
subl constante2(%rip), %edx
imul %edx, %eax

ret
