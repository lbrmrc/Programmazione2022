#include <stdio.h>

int bisestile(int A) {
  if (A % 400 == 0 || (A % 4 == 0 && A % 100 != 0))
    return 1;
  else
    return 0;
}

int giorni_del_mese(int M, int A) {
  if (M == 4 || M == 6 || M == 9 || M == 11)
    return 30;
  else if (M == 2)
    if (bisestile(A))
      return 29;
    else
      return 28;
  else
    return 31;
}

int valida(int g, int m, int a) {
  if (m < 1 || m > 12)
    return 0;
  if (g < 1 || g > giorni_del_mese(m, a))
    return 0;
  return 1;
}

int main(void) {
  int G, M, A;

  scanf("%d%d%d", &G, &M, &A);

  if (!valida(G, M, A)) {
    printf("Data non valida\n");
    return 1;
  }

  if (G == giorni_del_mese(M, A) && M == 12)
    printf("%d %d %d\n", 1, 1, A + 1);
  else if (G == giorni_del_mese(M, A))  // ultimo giorno del mese
    printf("%d %d %d\n", 1, M + 1, A);
  else
    printf("%d %d %d\n", G + 1, M, A);
  return 0;
}