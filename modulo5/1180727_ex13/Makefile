#MAKEFILE

ex13: new_matrix.o asm.o main.o
	gcc new_matrix.o asm.o main.o -o ex13
		
new_matrix.o: new_matrix.c
	gcc -g -Wall -c new_matrix.c -o new_matrix.o

asm.o: asm.s
	gcc -g -Wall -c asm.s -o asm.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o ex13
	
run: ex13
	./ex13