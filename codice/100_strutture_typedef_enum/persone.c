#include <stdio.h>
#include <string.h>

int main() {
  struct persona {
    char nome[20];
    char cognome[30];
    float altezza;
    int eta;
  } p1;

  int i;
  struct persona p2;

  struct persona persone[100];

  struct aula {
    char nome[20];
    struct persona occupanti[100];
  } f9;

  f9.occupanti[49].altezza = 1.80;
  strcpy(f9.nome, "Chiostro F9");

  p1.eta = 25;
  scanf("%f", &p1.altezza);
  strcpy(p1.cognome, "Jacobs");

  for (i = 0; i < 100; i++)
    persone[i].eta = 30;
}