prog: main.o iterativa.o ricorsiva.o
	gcc -o prog main.o iterativa.o ricorsiva.o

main.o: main.c myinclude.h
	gcc -c main.c

iterativa.o: iterativa.c
	gcc -c iterativa.c

ricorsiva.o: ricorsiva.c
	gcc -c ricorsiva.c