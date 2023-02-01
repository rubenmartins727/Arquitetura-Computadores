# ex14/Makefile

main: frequencies.o main.o
		gcc -Wall -g frequencies.o main.o -o main
		
frequencies.o: frequencies.c frequencies.h
		gcc -Wall -g -c frequencies.c
					
main.o: main.c frequencies.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
