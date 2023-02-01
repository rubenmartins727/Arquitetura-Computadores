#MAKEFILE

ex04: fill_student.o main.o asm.o
	gcc fill_student.o main.o asm.o -o ex04
		
fill_student.o: fill_student.c
	gcc -g -Wall -c fill_student.c -o fill_student.o

asm.o: asm.s
	gcc -Wall -g -c asm.s -o asm.o

main.o: main.c asm.h fill_student.h
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o ex04
	
run: ex04
	./ex04