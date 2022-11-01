#include <stdio.h>

int sommaDivisori(int numero){
    int somma=0;
    int i;

    for(i=1; i<=numero/2; i++){
        if(numero%i==0){
            somma=somma+i;
        }
    }

    return somma;
}

int main(){
    int i;

    for(i=1;i<=100;i++){
        if(i==sommaDivisori(i))
            printf("%d\n",i);
    }

    return 0;
}