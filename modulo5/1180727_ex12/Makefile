#MAKEFILE

ex12: new_matrix.o find_matrix.o main.o
	gcc new_matrix.o find_matrix.o main.o -o ex12
		
new_matrix.o: new_matrix.c
	gcc -g -Wall -c new_matrix.c -o new_matrix.o

find_matrix.o: find_matrix.c
	gcc -g -Wall -c find_matrix.c -o find_matrix.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o ex12
	
run: ex12
	./ex12