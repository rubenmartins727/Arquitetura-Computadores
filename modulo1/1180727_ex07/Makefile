# ex07/Makefile

main: array_sort1.o main.o
		gcc -Wall -g array_sort1.o main.o -o main
		
array_sort1.o: array_sort1.c array_sort1.h
		gcc -Wall -g -c array_sort1.c
					
main.o: main.c array_sort1.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
