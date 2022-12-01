#include <stdio.h>
#include <stdlib.h>

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

typedef struct {
  int minata;
  int coperta;
} Casella;

typedef struct {
  Casella griglia[NRIGHE][NCOLONNE];
} Campo;

typedef struct {
  int riga;
  int colonna;
} Mossa;

typedef enum { InCorso, Vinto, Perso } Stato;

int mineAdiacenti(Campo* pc, int i, int j) {
  int cont = 0;
  //   int m, n;
  //   for (m = i - 1; m <= i + 1; i++)
  //     if (m >= 0 && m < NRIGHE)
  //       for (n = j - 1; n <= j + 1; n++)
  //         if (n >= 0 && n < NCOLONNE)
  //           if (m != i || n != j)
  //             cont += g[m][n];
  cont += i >= 1 && j >= 1 && pc->griglia[i - 1][j - 1].minata;
  cont += i >= 1 && pc->griglia[i - 1][j].minata;
  cont += i >= 1 && j < NCOLONNE - 1 && pc->griglia[i - 1][j + 1].minata;
  cont += j >= 1 && pc->griglia[i][j - 1].minata;
  cont += j < NCOLONNE - 1 && pc->griglia[i][j + 1].minata;
  cont += i < NRIGHE - 1 && j >= 1 && pc->griglia[i + 1][j - 1].minata;
  cont += i < NRIGHE - 1 && pc->griglia[i + 1][j].minata;
  cont +=
      i < NRIGHE - 1 && j < NCOLONNE - 1 && pc->griglia[i + 1][j + 1].minata;
  return cont;
}

float rnd_float(float a, float b) {
  return a + (b - a) * (float)rand() / RAND_MAX;
}

void inizializza(Campo* pc) {
  int i, j;

  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++) {
      pc->griglia[i][j].minata = rnd_float(0.0, 1.0) < PROBMINA;
      pc->griglia[i][j].coperta = 1;
    }
}

void scopri(Campo* pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      pc->griglia[i][j].coperta = 0;
}

void stampa_indici_colonna() {
  int i;
  printf("   ");
  for (i = 0; i < NCOLONNE; i++)
    printf("%c", 'a' + i);
  printf("\n");
}

void bordo_orizzontale(char c) {
  int j;
  printf("  ");
  for (j = 0; j < NCOLONNE + 2; j++)
    printf("%c", c);
  printf("\n");
}

void stampa(Campo* pc) {
  int i, j;
  stampa_indici_colonna();
  bordo_orizzontale('-');
  for (i = 0; i < NRIGHE; i++) {
    printf("%2d", i + 1);
    printf("|");
    for (j = 0; j < NCOLONNE; j++)
      if (pc->griglia[i][j].coperta)
        printf("#");
      else if (pc->griglia[i][j].minata)
        printf("*");
      else {
        int m = mineAdiacenti(pc, i, j);
        if (m > 0)
          printf("%d", m);
        else
          printf(" ");
      };
    printf("|\n");
  }
  bordo_orizzontale('-');
}

void esegui(Campo* pc, Mossa* pm) {
  pc->griglia[pm->riga][pm->colonna].coperta = 0;
}

Stato stato(Campo* pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (pc->griglia[i][j].minata && !pc->griglia[i][j].coperta)
        return Perso;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (!pc->griglia[i][j].minata && pc->griglia[i][j].coperta)
        return InCorso;
  return Vinto;
}

void leggiMossa(Mossa* pm) {
  char s[10];
  scanf("%s", s);
  pm->colonna = s[0] - 'a';
  pm->riga = s[1] - '1';
}

Stato turno(Campo* pc) {
  Mossa m;
  stampa(pc);
  leggiMossa(&m);
  esegui(pc, &m);
  return stato(pc);
}

int main() {
  Campo campo;
  Stato s = InCorso;
  inizializza(&campo);
  do {
    s = turno(&campo);
  } while (s == InCorso);
  if (s == Vinto)
    printf("Hai vinto\n");
  else
    printf("Hai perso\n");
  scopri(&campo);
  stampa(&campo);
  return 0;
}