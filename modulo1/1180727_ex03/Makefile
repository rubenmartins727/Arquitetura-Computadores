# ex03/Makefile

main: sum_even.o main.o
		gcc -Wall -g sum_even.o main.o -o main
		
sum_even.o: sum_even.c sum_even.h
		gcc -Wall -g -c sum_even.c
					
main.o: main.c sum_even.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
