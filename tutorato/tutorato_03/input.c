#include <stdio.h>

main(){
    int a, sum, max, min;
    min=101;
    max=0;
    sum=0;

    printf("Inserisci un numero da tastiera: \n");
    scanf("%d", &a);
    
    while(a!=0){
        sum = sum + a;
        if(a>=max)
            max=a;
        if(a<=min)
            min=a;
        printf("Inserisci un numero da tastiera: \n");
        scanf("%d", &a);
    }

    printf("La somma è %d\n", sum);
    printf("Il numero maggiore è %d\n", max);
    printf("Il numero minore è %d\n", min);
}