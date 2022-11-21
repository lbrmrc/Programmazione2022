#include <stdio.h>

int main(){
    char parola[21];
    char carattere, nuovo_carattere;
    int i=0;

    printf("Inserire una stringa max 20 caratteri\n");
    scanf("%s", parola);

    printf("Inserisci il carattere da cercare\n");
    scanf(" %c", &carattere);

    printf("Inserisci il carattere con cui sostituire\n");
    scanf(" %c", &nuovo_carattere);

    while(parola[i]!='\0'){
        if(parola[i]==carattere){
            parola[i]=nuovo_carattere;
        }
        i++;
    }

    printf("La nuova parola è %s\n",parola);

}