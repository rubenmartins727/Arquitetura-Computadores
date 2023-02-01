# ex12/Makefile

main: capitalize.o main.o
		gcc -Wall -g capitalize.o main.o -o main
		
capitalize.o: capitalize.c capitalize.h
		gcc -Wall -g -c capitalize.c
					
main.o: main.c capitalize.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
