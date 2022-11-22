#include <stdio.h>
#define DIM 21
/*
int main(){
    char parola[DIM];
    char inv_parola[DIM];
    int n=0,i,j=0;

    printf("Inserire una stringa max 20 caratteri\n");
    scanf("%s", parola);

    while(parola[n]!='\0'){
        n++;
    }

    for(i=n-1;i>=0;i--){
        inv_parola[j]=parola[i];
        j++;
    }

    inv_parola[j]='\0';

    printf("La parola invertita è: %s\n", inv_parola);

}
*/
int main(){
    char parola[DIM];
    int n=0,i,j=0;
    char temp;

    printf("Inserire una stringa max 20 caratteri\n");
    scanf("%s", parola);

    while(parola[n]!='\0'){
        n++;
    }

    j=n-1;
    for(i=0;i<j;i++){
        temp=parola[i];
        parola[i]=parola[j];
        parola[j]=temp;
        j--;
    }

    printf("La parola invertita è: %s\n",parola);

}
