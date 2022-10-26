#include <stdio.h>

int valore_assoluto(int n) {
  int risultato;  // sarà il valore di ritorno
  if (n < 0)
    risultato = -n;
  else
    risultato = n;
  return risultato;
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", valore_assoluto(a));
}