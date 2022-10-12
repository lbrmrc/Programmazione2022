#include <stdio.h>

main(){
    int m, n;
    int q;
    printf("Inserisci dividendo e divisore\n");
    scanf("%d%d", &m, &n);
    q = 0;
    while (m - n >= 0) {
        m = m - n; // aggiorno m
        q++; // aggiorno q
    }
    printf("Quoziente: %d, Resto: %d\n", q, m);
}