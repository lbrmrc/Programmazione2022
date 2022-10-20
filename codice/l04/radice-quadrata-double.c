#include <math.h>
#include <stdio.h>

main() {
  double a;
  double x;
  scanf("%lf", &a);
  x = 1.0;
  while (fabs(x * x - a) / a > 1e-10) {
    x = (x + a / x) / 2.0;
  }
  printf("%.10lf\n", x);
}