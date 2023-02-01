#Makefile

main: main.o pcg32_random_r.o sensores.o us103.o us104.o us110.o us111.o us112.o 
		gcc -Wall -g main.o pcg32_random_r.o sensores.o us103.o us104.o us110.o us111.o us112.o  -o main
		
main.o: main.c pcg32_random_r.h sensores.h us103.h us104.h us110.h us111.h us112.h 
		gcc -Wall -g -c main.c -o main.o

sensores.o: sensores.s
		gcc -Wall -g -c sensores.s -o sensores.o

pcg32_random_r.o: pcg32_random_r.s
		gcc -Wall -g -c pcg32_random_r.s -o pcg32_random_r.o
		
us103.o: us103.c
		gcc -Wall -g -c us103.c -o us103.o

us104.o: us104.c
		gcc -Wall -g -c us104.c -o us104.o		

us110.o: us110.c
		gcc -Wall -g -c us110.c -o us110.o		

us111.o: us111.c
		gcc -Wall -g -c us111.c -o us111.o

us112.o: us112.c
		gcc -Wall -g -c us112.c -o us112.o

run:	main
		./main

clean: 
	rm -f *.o main
