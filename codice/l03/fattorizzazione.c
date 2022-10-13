#include <stdio.h>

main() {
  int numero, n, i, j, numero_divisori_di_n;
  int quoziente, esponente;
  printf("Inserisci un numero naturale\n");
  scanf("%d", &numero);
  quoziente = numero;
  for (n = 2; n <= numero; n++) {
    // S1 : n assume valori compresi fra 1 e n
    if (numero % n == 0) {
      // S2: n assume i valori divisori di n compresi fra 1 e n
      numero_divisori_di_n = 0;
      for (i = 2; numero_divisori_di_n == 0 && i * i <= n; i++)
        if (n % i == 0) {
          numero_divisori_di_n++;
        }
      if (numero_divisori_di_n == 0) {
        esponente = 0;
        // n assume i valori divisori primi di numero
        while (quoziente % n == 0) {
          quoziente = quoziente / n;
          esponente++;
        }
        printf("%d", n);
        if (esponente > 1)
          printf("^%d", esponente);
        if (quoziente > 1)
        printf(" x ");
      }
    }
  }
  printf("\n");
}