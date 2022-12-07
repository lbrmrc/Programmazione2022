#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE* pf;
  char c;
  if (argc != 2){
    printf("Uso: %s nome_file_da_stampare\n", argv[0]);
    exit(3);
  }

  pf = fopen(argv[1], "rt");
  if (pf == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(1);
  }

  while (fscanf(pf, "%c", &c) == 1)
    printf("%c", c);

  if (fclose(pf) != 0) {
    printf("Errore chiusura file %s\n", argv[1]);
    exit(2);
  }
}