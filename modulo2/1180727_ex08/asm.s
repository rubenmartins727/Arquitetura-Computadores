.section .data

s1:
    .short 2

s2:
    .short 3

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
