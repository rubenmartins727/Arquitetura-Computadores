#MAKEFILE

ex14: add_matrixes.o new_matrix.o main.o
	gcc add_matrixes.o new_matrix.o main.o -o ex14
		
add_matrixes.o: add_matrixes.c
	gcc -g -Wall -c add_matrixes.c -o add_matrixes.o

new_matrix.o: new_matrix.c
	gcc -g -Wall -c new_matrix.c -o new_matrix.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o ex14
	
run: ex14
	./ex14