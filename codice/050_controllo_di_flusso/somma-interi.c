#include <stdio.h>

main() {
  int n;  // variabile di input
  int i;
  int s;  // accumulatore
  scanf("%d", &n);

  s = 0;  // v0
  for (i = 1; i <= n; i++) {
    // S1: i assume i valori fra 1 e n
    printf("%d", i);
    if (i < n)
      printf("+");
    else
      printf("=");
    // output = map(printf, "+" se < n, "=" altrimenti, S1)
    s = s + i;  // aggiornamento accumulatore
    // s è la somma dei valori fra 1 e i
  }
  // s è la somma dei naturali fra 1 e n
  printf("%d\n", s);
}