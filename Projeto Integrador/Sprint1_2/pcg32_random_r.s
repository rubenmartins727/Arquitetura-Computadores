.section .data

.global state, inc

.section .text

	.global pcg_random_r
	
pcg_random_r:
movq $0, %rax
movq $0, %rdx
movq state(%rip), %rax
movl inc(%rip), %esi
pushq %rax

#Advance internal state
orl $1, %esi
movabsq $6364136223846793005, %rcx
mulq %rcx
addq %rsi, %rax
movq %rax, state(%rip)
movq $0, %rax
movq $0, %rdx
movq $0, %rcx

#Calculate output function (XSH RR), uses old state for max ILP
popq %rdx
pushq %rdx
sarq $18, %rdx
popq %rcx #oldstate em %rcx
xorq %rcx, %rdx
sarq $27, %rdx #xorshifted em %rdx
sarq $59,%rcx #rot em %rcx

#Return
pushq %rdx
sarq %rcx, %rdx #xorshifted >> rot
andq $31, %rcx
popq %rax
salq %rcx, %rax
orq %rdx, %rax

movq $0, %rdx





ret
