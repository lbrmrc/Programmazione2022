#include <stdio.h>
#define DIM 100
#define DIM2 300

int main(){
    char parola[DIM], new_parola[DIM2], consonanti[DIM], consonante_trovata=0;

    int i=0, n=0,j=0, k=0;

    printf("Inserire una stringa max 20 caratteri\n");
    scanf("%s", parola);

    while(parola[n]!='\0'){
        n++;
    }

    printf("La parola %s è lunga %d\n",parola, n);

    while(i<n && parola[i]!='a' && parola[i]!='e' && parola[i]!='i' && parola[i]!='o' && parola[i]!='u'){ //fin quando non trovo una vocale scorro la mia parola di input
            consonanti[j]= parola[i]; //andiamo a costruire un array contenente tutte e sole le consonanti con cui la parola inizia
            consonante_trovata = 1;
            i++;
            j++;            
    }
    if(consonante_trovata){//se la parola di input inizia almeno con una consonante
        for(i=0; i+j<n; i++){ //vado a creare una nuova parola inserendo solo le lettere che partono dalla prima vocale
            new_parola[i]=parola[i+j];
        }
        for(k=0;k<j;k++){ //ora vado ad aggiungere alla fine della new_parola le consonanti che ho eliminato dall'inizio della parola di input
            new_parola[i]=consonanti[k];
            i++;
        }
    }

    i=n; // questo serve nel caso in cui la parola inizi con una vocale

    //aggiungo il suffisso finale
    new_parola[i]='a';
    i++;
    new_parola[i]='y';
    i++;

    new_parola[i]='\0'; //ricordiamo di inserire il terminatore!!

    printf("La parola criptata è: %s\n", new_parola);
}