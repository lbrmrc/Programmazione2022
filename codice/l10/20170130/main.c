#include <stdio.h>
#include <stdlib.h>

#include "listaCalorie.h"

int main(int argc, char* argv[]) {
  FILE* fb;
  FILE* ft;
  Lista l;
  Record r;
  char nomeAlimento[31];
  float quantita;
  float calorieAlimento;
  float calorieTotali;

  // esempio linea di comando: ./calorie calorie.dat pasto.txt
  if (argc != 3) {
    printf("Uso: %s file_binario file_testo\n", argv[0]);
    exit(1);
  }

  // inizializzazione lista sequenziale
  lista_vuota(&l);

  // caricare il file binario nella lista sequenziale
  fb = fopen(argv[1], "rb");
  if (fb == NULL) {
    printf("Errore apertura %s\n", argv[1]);
    exit(2);
  }

  // l.n_elementi = fread(l.dati, sizeof(Record), DIM, fb);

  // un record alla volta
  while (fread(&r, sizeof(Record), 1, fb) == 1 && !piena(l))
    insCoda(&l, r);
  fclose(fb);

  // calcolo delle calorie nel pasto
  ft = fopen(argv[2], "rt");
  if (ft == NULL) {
    printf("Errore apertura %s\n", argv[2]);
    exit(3);
  }

  calorieTotali = 0;
  // lettura riga
  while (fscanf(ft, "%s%f", nomeAlimento, &quantita) == 2) {
    // calcolo calorie riga
    calorieAlimento = calorie100grammi(l, nomeAlimento) / 100 * quantita;
    // aggiornamento accumulatore
    calorieTotali += calorieAlimento;
  }

  fclose(ft);

  printf("Calorie totali: %.2f\n", calorieTotali);
  return 0;
}