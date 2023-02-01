.section .data


.global currentTemperature
.global desireTemperature

increaseTemp:
    .short 180 

decreaseTemp:
    .short 240    

.section .text

	.global needed_time
	
needed_time:

movb currentTemperature(%rip), %al
movb desireTemperature(%rip), %cl
cmpb %cl, %al
jl increase
je zeroTime
jg deacrease

increase:
subb %cl, %al
movb $-1, %cl
mulb %cl
cbw
movw increaseTemp(%rip), %cx
mulw %cx
jmp end

deacrease:
subb %cl, %al
movw decreaseTemp(%rip), %cx
mulw %cx
jmp end

zeroTime:
movl $0, %eax

end:
ret
