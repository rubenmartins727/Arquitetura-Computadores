# ex19/Makefile

main: find_word.o main.o
		gcc -Wall -g find_word.o main.o -o main
		
find_word.o: find_word.c find_word.h
		gcc -Wall -g -c find_word.c
					
main.o: main.c find_word.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
