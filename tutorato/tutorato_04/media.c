#include<stdio.h>

main(){
    int numero, count, somma;
    float media;

    count=0;
    somma=0;
    //media=0;

    do{
        printf("Inserire numero ('0' termina):\n");
        scanf("%d", &numero);

        somma=somma+numero;

        if(numero!=0){  
            count++;
        }

    }while(numero!=0);

/*
    printf("Inserire numero ('0' termina):\n");
    scanf("%d", &numero);

    while(numero!=0){
        somma=somma+numero;
        count++;

        printf("Inserire numero ('0' termina):\n");
        scanf("%d", &numero);
    };
*/

    if(numero!=0){ 
        media=((float)somma)/count;

        printf("Media: %.2f\n", media);
    }
    else
        printf("Hai inserito solouno zero\n");
        
}