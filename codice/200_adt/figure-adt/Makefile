esempio_figure: main.o figura.o
	gcc -o esempio_figure -g main.o figura.o -lm

main.o: main.c figura.h
	gcc -c -g main.c

figura.o: figura.c figura.h
	gcc -c -g figura.c


