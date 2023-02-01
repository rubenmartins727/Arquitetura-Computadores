.section .data

.global code
.global currentSalary

.section .text

	.global new_salary
	
new_salary:

movw code(%rip), %ax
cmpw $20, %ax
je raiseManager
cmpw $21, %ax
je raiseEngineer
cmpw $22, %ax
je raiseTechnician
jne otherPositions

raiseManager:
movw currentSalary(%rip), %ax
cwde
addl $400, %eax
jmp end

raiseEngineer:
movw currentSalary(%rip), %ax
cwde
addl $300, %eax
jmp end

raiseTechnician:
movw currentSalary(%rip), %ax
cwde
addl $200, %eax
jmp end

otherPositions:
movw currentSalary(%rip), %ax
cwde
addl $150, %eax
jmp end

end:
ret
