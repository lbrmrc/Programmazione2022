#include <stdio.h>

typedef enum {
  Gennaio,   // 0
  Febbraio,  // 1
  Marzo,     // 2
  Aprile,    // 3
  Maggio,
  Giugno,
  Luglio,
  Agosto,
  Settembre,
  Ottobre,
  Novembre,  // 10
  Dicembre   // 11
} Mese;

typedef struct {
  int giorno;
  Mese mese;
  int anno;
} Data;

typedef struct {
  char nome[20];
  Data data_nascita;
} Persona;

int main() {
  Data oggi;

  Data ieri = {21, 11, 2022};

  Persona persona;

  Persona presidente = {"Sergio", {23, Luglio, 1941}};

  Mese attuale;
  int mese_input;
  scanf("%d", &mese_input);
  attuale = mese_input - 1;
  switch (mese_input) {
    case 1:
      attuale = Gennaio;
      break;
    case 2:
      attuale = Febbraio;
      break;
  }

  switch (attuale) {
    case Gennaio:;
    case Febbraio:;
  }

  printf("%s", attuale);

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