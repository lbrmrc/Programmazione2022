// calcola e stampa il giorno giuliano della data in input
#include <stdio.h>

main() {
  // definizioni
  int G, M, A;
  int N0, N1, N2, N3;
  int JD;

  // input
  printf("Inserisci giorno, mese e anno di una data\n");
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  // calcolo risultati intermedi
  N0 = (M - 14) / 12;
  N1 = (1461 * (A + 4800 + N0)) / 4;
  N2 = (367 * (M - 2 - 12 * N0)) / 12;
  N3 = (3 * (A + 4900 + N0)) / 400;
  // calcolo risultato finale
  JD = N1 + N2 - N3 + G - 32075;
  // stampa risultato finale

  printf("Il giorno giuliano e` %d\n", JD);
}

// Indentazione automatica:
// Windows Alt+Shift+F
// Linux Ctrl+Shift+I
// Mac Shift+Option+F