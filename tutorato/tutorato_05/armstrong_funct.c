#include <stdio.h>

int conta_cifre(int numero){
    int cifre = 0; //devo contare quindi ho bisogno di un accumulatore
        while(numero>0){
        cifre++;
        numero=numero/10;
    }

    return cifre;
}

int potenza(int base, int esponente){
        int i;
        int potenza=1;
        for(i=0;i<esponente;i++){
            potenza = base * potenza;
        }

        return potenza;
}
int somma_potenze(int numero, int num_cifre){
    int resto_cifra;
    int somma = 0;
    while(numero>0){
        resto_cifra=numero%10;

        somma=somma+potenza(resto_cifra, num_cifre);
        numero= numero/10;
    }

    return somma;
}

void verifica_risultato(int numero, int risultato){
    if(risultato==numero){
        printf("Armstrong\n");
    }
    else
        printf("NON Armstrong\n");
}

main(){
    int numero, num_cifre;
    int resto,i, potenza, risultato;

    risultato=0;

    printf("Inserire un numero\n");
    scanf("%d", &numero);

    
    num_cifre= conta_cifre(numero);

    risultato = somma_potenze(numero,num_cifre);

    verifica_risultato(numero, risultato);

}