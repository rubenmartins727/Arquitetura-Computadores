# ex13/Makefile

main: where_is.o main.o
		gcc -Wall -g where_is.o main.o -o main
		
where_is.o: where_is.c where_is.h
		gcc -Wall -g -c where_is.c
					
main.o: main.c where_is.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
