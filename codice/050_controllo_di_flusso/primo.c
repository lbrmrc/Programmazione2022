#include <stdio.h>

main() {
  int n, i, n_divisori;
  printf("Inserisci un numero naturale\n");
  scanf("%d", &n);
  n_divisori = 0;  // inizializzazione accumulatore
  for (i = 1; i <= n; i++) {
    // S1 i assume i valori fra 1 e n
    if (n % i == 0) {
      // S2: i assume i valori dei divisori di n
      n_divisori = n_divisori + 1;
    }
  }
  // n_divisori contiene il numero dei divisori di n compresi fra 1 e n
  if (n_divisori == 2)
    printf("%d è primo\n", n);
  else
    printf("%d non è primo\n", n);
}