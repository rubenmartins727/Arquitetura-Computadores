#ex09/Makefile

main: main.o approved_semester.o
		gcc -Wall -g main.o approved_semester.o -o main
		
main.o: main.c approved_semester.h
		gcc -Wall -g -c main.c -o main.o
					
approved_semester.o: approved_semester.s
		gcc -Wall -g -c approved_semester.s -o approved_semester.o

run:	main
		./main

clean: 
	rm -f *.o main
