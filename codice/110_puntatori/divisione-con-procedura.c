#include <stdio.h>

void divisione(int dividendo, int divisore, int *pq, int *pr){
    *pq = dividendo / divisore;
    *pr = dividendo  % divisore;
}

int main(void){
    int q, r;
    divisione(15, 7, &q, &r);
    printf("%d, %d\n", q, r); // stampa 2,1
    return 0;
}