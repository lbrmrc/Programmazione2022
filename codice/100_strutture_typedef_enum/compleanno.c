#include <stdio.h>

int main (){

struct data {
    int giorno, mese, anno;
} oggi;

struct {
    char nome[20];
    struct data data_nascita;
} persona;

// leggere data di oggi
printf("Inserisci la data di oggi\n");
scanf("%d%d%d", &oggi.giorno, &oggi.mese, &oggi.anno);

// leggere nome e data di nascita della persona
printf("Inserisci nome e data di nascita\n");
scanf("%s%d%d%d", persona.nome, &persona.data_nascita.giorno, &persona.data_nascita.mese, &persona.data_nascita.anno);

// eventualmente stampare auguri

if (persona.data_nascita.giorno == oggi.giorno && persona.data_nascita.mese== oggi.mese)
    printf("Buon compleanno %s\n", persona.nome);

return 0;
}