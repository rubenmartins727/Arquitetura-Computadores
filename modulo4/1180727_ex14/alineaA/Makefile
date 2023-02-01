# ex14/Makefile

main: reset_bit.o main.o
		gcc -Wall -g reset_bit.o main.o -o main
		
reset_bit.o: reset_bit.c reset_bit.h
			gcc -Wall -c reset_bit.c
					
main.o: main.c reset_bit.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main

