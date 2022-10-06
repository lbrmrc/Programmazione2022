#include <stdio.h>

main() {
  int anno, mese, n_giorni;
  printf("Inserisci mese e anno\n");
  scanf("%d%d", &mese, &anno);

  // se è febbraio
  if (mese == 2)
    // se l'anno è bisestile
    if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
      // 29
      n_giorni = 29;
    // altrimenti
    else
      // 28
      n_giorni = 28;
  // altrimenti
  else
    // se è aprile, giugno, settembre o novembre
    if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
      // 30
      n_giorni = 30;
    // altrimenti
    else
      // 31
      n_giorni = 31;

  printf("%d\n", n_giorni);
}