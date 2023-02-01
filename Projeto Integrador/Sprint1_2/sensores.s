.section .text
	.global sens_temp, sens_velc_vento, sens_dir_vento, sens_humd_atm, sens_humd_solo, sens_pluvio

sens_temp:

    movq $0, %rax
    movb %dil, %al
    addb %sil, %al

ret

sens_velc_vento:

    movq $0, %rax
    movb %dil, %al
    addb %sil, %al

ret

sens_dir_vento:

    movq $0, %rax
    movb %dil, %al
    addb %sil, %al

ret

sens_humd_atm:

    movq $0, %rax
    movb %dil, %al
    addb %dl, %al

ret

sens_humd_solo:

    movq $0, %rax
    movb %dil, %al
    addb %dl, %al

ret

sens_pluvio:

    movq $0, %rax
    movb %dil, %al
    addb %dl, %al

ret
	




