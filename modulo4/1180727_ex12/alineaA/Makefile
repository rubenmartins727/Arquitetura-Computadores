# ex12a/Makefile

main: count_bits_one.o main.o
		gcc -Wall -g count_bits_one.o main.o -o main
		
count_bits_one.o: count_bits_one.c count_bits_one.h
			gcc -Wall -c count_bits_one.c
					
main.o: main.c count_bits_one.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main

