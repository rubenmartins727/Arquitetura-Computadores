# ex08/Makefile

main: array_sort2.o main.o
		gcc -Wall -g array_sort2.o main.o -o main
		
array_sort2.o: array_sort2.c array_sort2.h
		gcc -Wall -g -c array_sort2.c
					
main.o: main.c array_sort2.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
