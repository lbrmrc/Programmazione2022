#include <stdio.h>

main(){
    int numero, cifre=0, numeroAux;
    int resto,i, potenza, risultato;

    risultato=0;

    printf("Inserire un numero\n");
    scanf("%d", &numero);

    numeroAux=numero;

    while(numeroAux>0){
        cifre++;
        numeroAux=numeroAux/10;
    };
    numeroAux=numero;

    while(numeroAux>0){
        resto=numeroAux%10;
        potenza=1;
        for(i=0;i<cifre;i++){
            potenza = resto * potenza;
        }
        risultato=risultato+potenza;
        numeroAux= numeroAux/10;
    }

    if(risultato==numero){
        printf("Armstrong\n");
    }
    else
        printf("NON Armstrong\n");
}