#include <stdio.h>

main() {
  int n, i;
  printf("Inserisci un numero naturale\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    // S1 : i assume valori compresi fra 1 e n
    if (n % i == 0)
    {
      // output: i assume i valori divisori di n compresi fra 1 e n
      printf("%d\n", i);
    }
  }
}