# ex18/Makefile

main: compress_shorts.o main.o
		gcc -Wall -g compress_shorts.o main.o -o main
		
compress_shorts.o: compress_shorts.c compress_shorts.h
		gcc -Wall -g -c compress_shorts.c
					
main.o: main.c compress_shorts.h
		gcc -Wall -g -c main.c

run:		main
		./main

clean: 
	rm -f *.o main
