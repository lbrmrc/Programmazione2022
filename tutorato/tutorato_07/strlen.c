#include <stdio.h>

int main(){
    char parola[21];
    int i=0;

    printf("Inserire una stringa max 20 caratteri\n");
    scanf("%s", parola);

    while(parola[i]!='\0'){
        i++;
    }

    printf("La parola è lunga %d\n",i);
}