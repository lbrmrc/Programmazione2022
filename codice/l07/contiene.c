#include <stdio.h>
#define DIM 50

int main() {
  char s1[DIM], s2[DIM];
  int i1, i2;
  int potenzialmente_uguale;
  int contenuta;
  printf("Inserisci due parole\n");
  scanf("%s%s", s1, s2);

  i2 = 0;
  contenuta = 0;

  // finché non ho ancora trovato s1 in s2 e s2 non è finita
  while (!contenuta && s2[i2] != '\0') {
    // verifico se s1 è uguale alla parte di s2 che inizia all'indice i2
    potenzialmente_uguale = 1;
    i1 = 0;

    while (potenzialmente_uguale && s1[i1] != '\0')
      if (s1[i1] != s2[i2 + i1])
        potenzialmente_uguale = 0;
      else
        i1++;

    if (potenzialmente_uguale)
      contenuta = 1;
    else
      i2++;
  }

  if (contenuta)
    printf("%s contenuta in %s\n", s1, s2);
  else
    printf("%s non contenuta in %s\n", s1, s2);

  return 0;
}