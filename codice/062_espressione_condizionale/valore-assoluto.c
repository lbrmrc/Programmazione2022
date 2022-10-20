#include <stdio.h>

main(){
    int n;
    printf("Inserisci un intero\n");
    scanf("%d", &n);
    // |-5| = 5
    printf("|%d| = %d\n", n, (n < 0 ? -n : n));
}