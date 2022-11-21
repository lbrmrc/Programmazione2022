#include <stdio.h>
#define DIM 100
#define DIM2 300

int main(){
    char parola[DIM], new_parola[DIM2];

    int i, n=0,j=0;

    printf("Inserire una stringa max 20 caratteri\n");
    scanf("%s", parola);

    while(parola[n]!='\0'){
        n++;
    }

    printf("La parola %s è lunga %d\n",parola, n);

    for(i=0;i<n;i++){
        if(parola[i]=='a'||parola[i]=='e'||parola[i]=='i'||parola[i]=='o'||parola[i]=='u'){
            new_parola[j]=parola[i];
            new_parola[++j]='f';
            new_parola[++j]=parola[i];
        }
        else{
            new_parola[j]=parola[i];
        }
        j++;
    }

    new_parola[j]='\0'; //ricordiamo di inserire il terminatore

    printf("La parola criptata è: %s\n", new_parola);
}