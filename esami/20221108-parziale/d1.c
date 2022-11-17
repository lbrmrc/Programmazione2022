int main(void) {
  int m = 1000000;
  do {
    if (!(m % 2))
      m -= 3;
    else
      m /= 3;
  } while (m >= 0);
  return 0;
}