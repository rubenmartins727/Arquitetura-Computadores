# ex17a/Makefile

main: greater_date.o main.o
		gcc -Wall -g greater_date.o main.o -o main
		
greater_date.o: greater_date.c greater_date.h
			gcc -Wall -c greater_date.c
					
main.o: main.c greater_date.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main

