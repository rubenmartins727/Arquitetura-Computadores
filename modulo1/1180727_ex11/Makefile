# ex11/Makefile

main: palindrome.o main.o
		gcc -Wall -g palindrome.o main.o -o main
		
palindrome.o: palindrome.c palindrome.h
		gcc -Wall -g -c palindrome.c
					
main.o: main.c palindrome.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
