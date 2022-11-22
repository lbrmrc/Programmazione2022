#include <stdio.h>

typedef struct {
  int giorno, mese, anno;
} Data;

typedef struct {
  char nome[20];
  Data data_nascita;
} Persona;

int main() {
  Data oggi;

  Data ieri = {21, 11, 2022};

  Persona persona;

  Persona presidente = {"Sergio", {23, 7, 1941}};

  // leggere data di oggi
  printf("Inserisci la data di oggi\n");
  scanf("%d%d%d", &oggi.giorno, &oggi.mese, &oggi.anno);

  // leggere nome e data di nascita della persona
  printf("Inserisci nome e data di nascita\n");
  scanf("%s%d%d%d", persona.nome, &persona.data_nascita.giorno,
        &persona.data_nascita.mese, &persona.data_nascita.anno);

  // eventualmente stampare auguri

  if (persona.data_nascita.giorno == oggi.giorno &&
      persona.data_nascita.mese == oggi.mese)
    printf("Buon compleanno %s\n", persona.nome);

  return 0;
}