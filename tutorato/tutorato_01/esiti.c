#include <stdio.h>

main(){
    int esito;

    printf("Inserire l'esito dell'esame: ");
    scanf("%d", &esito);

    if(18> esito)
        printf("Insufficiente\n");
    if(18<= esito && esito<=20)
        printf("Sufficiente\n");
    if(21<= esito && esito<=23)
        printf("Discreto\n");
    if(24<= esito && esito<=26)
        printf("Buono\n");
    if(27<= esito && esito<=29)
        printf("Distinto\n");
    if(30<= esito && esito<=32)
        printf("Ottimo\n");   
}