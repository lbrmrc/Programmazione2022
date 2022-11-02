#include <stdio.h>

int primo(int n) {
  int numero_divisori_di_n, i;
  numero_divisori_di_n = 0;
  for (i = 2; numero_divisori_di_n == 0 && i * i <= n; i++)
    if (n % i == 0) {
      numero_divisori_di_n++;
    }

  if (numero_divisori_di_n == 0) {
    // n e` primo
    return 1;
  } else
    return 0;
}

int PI(int m)  // restituisce il numero di numeri primi minori o uguali a m
{
  int i;
  int contatore_primi = 0;
  for (i = 2; i <= m; i++)
    if (primo(i))
      contatore_primi++;
  return contatore_primi;
}

int main() {
  int i;
  printf("n\tPI(n)\n");
  for (i = 1; i <= 20; i++)
    printf("%d\t%d\n", i, PI(i));
  return 0;
}