.section .data

.global s1
.global s2

.section .text

	.global crossSumBytes
	
crossSumBytes:

movb s1(%rip), %ah
movb s2(%rip), %cl
addb %cl, %ah
movb s1(%rip), %al
movb s2(%rip), %ch
addb %ch, %al

ret
