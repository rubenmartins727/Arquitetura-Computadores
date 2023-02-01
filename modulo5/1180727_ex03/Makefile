#MAKEFILE

ex03: fill_student.o main.o
	gcc fill_student.o main.o -o ex03
		
fill_student.o: fill_student.c
	gcc -g -Wall -c fill_student.c -o fill_student.o
	
main.o: main.c
	gcc -g -Wall -c main.c -o main.o
	
clean:
	rm -f *.o ex03
	
run: ex03
	./ex03