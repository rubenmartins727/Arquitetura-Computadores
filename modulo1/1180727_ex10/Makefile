# ex10/Makefile

main: odd_sum.o main.o
		gcc -Wall -g odd_sum.o main.o -o main
		
odd_sum.o: odd_sum.c odd_sum.h
		gcc -Wall -g -c odd_sum.c
					
main.o: main.c odd_sum.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
