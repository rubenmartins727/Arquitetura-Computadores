# ex16/Makefile

main: where_exists.o main.o
		gcc -Wall -g where_exists.o main.o -o main
		
where_exists.o: where_exists.c where_exists.h
		gcc -Wall -g -c where_exists.c
					
main.o: main.c where_exists.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
