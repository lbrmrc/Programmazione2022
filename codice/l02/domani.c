#include <stdio.h>

main() {
  int giorno, mese, anno, n_giorni;
  printf("Inserisci giorno, mese e anno di una data\n");
  scanf("%d%d%d", &giorno, &mese, &anno);

  if (mese == 2)
    if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
      n_giorni = 29;
    else
      n_giorni = 28;
  else if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    n_giorni = 30;
  else
    n_giorni = 31;
  // se fine anno (es. 31 12 2022)

  if (giorno < 1 || giorno > n_giorni)
    printf("Data non esistente\n");
  else if (giorno == 31 && mese == 12)
    // 1 1 anno+1
    printf("%d/%d/%d\n", 1, 1, anno + 1);
  // altrimenti se fine mese (es. 28 2 2022)
  else if (giorno == n_giorni)
    // 1 mese+1 anno
    printf("%d/%d/%d\n", 1, mese + 1, anno);
  // altrimenti (es. 6 10 2022)
  // giorno+1 mese anno
  else
    printf("%d/%d/%d\n", giorno + 1, mese, anno);
}