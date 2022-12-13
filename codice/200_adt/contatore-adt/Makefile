esempio_contatore: main.o contatore.o
	gcc -o esempio_contatore -g main.o contatore.o

main.o: main.c contatore.h
	gcc -c -g main.c

contatore.o: contatore.c contatore.h
	gcc -c -g contatore.c