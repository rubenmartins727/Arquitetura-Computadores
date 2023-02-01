# ex04/Makefile

main: upper1.o main.o
		gcc -Wall -g upper1.o main.o -o main
		
upper1.o: upper1.c upper1.h
		gcc -Wall -g -c upper1.c
					
main.o: main.c upper1.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
