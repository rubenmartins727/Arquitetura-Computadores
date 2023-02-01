# ex06/Makefile

main: power_ref.o main.o
		gcc -Wall -g power_ref.o main.o -o main
		
power_ref.o: power_ref.c power_ref.h
		gcc -Wall -g -c power_ref.c
					
main.o: main.c power_ref.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
