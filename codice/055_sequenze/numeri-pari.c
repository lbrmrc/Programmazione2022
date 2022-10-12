#include <stdio.h>

main() {
  int i;
  for (i = 1;    // init
       i <= 20;  // cond
       i++       // update
  ) {
    // S1: valori assunti da i, tutti quelli fra 1 e 20
    if (i % 2 == 0) {
      // S2: i assume i valori pari fra 1 e 20
      printf("%d\n", i);
      // output: i valori pari fra 1 e 20
    }
  }
}