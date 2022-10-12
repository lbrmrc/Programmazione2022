main() {
  int n, d;

  n = 0;
  do {
    n = n + 1;
    // S1: n assume la sequenza dei valori compresi fra 1 e 10
    d = n * 2;
    // S2: d assume la sequenza dei doppi dei numeri compresi fra 1 e 10
    printf("%d\n", d);
    // Output: assume la sequenza dei doppi dei numeri compresi fra 1 e 10
  } while (n < 10);
}