#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "listaParole.h"

void nuova_lista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista* pl, char* s) {
  // finchè 1. la lista non è vuota 2. non ho trovato una parola più corta di
  // s 3. non ho trovato s
  while (*pl != NULL && strlen((*pl)->dato.parola) >= strlen(s) &&
         strcmp((*pl)->dato.parola, s) != 0)
    // aggiorno pl in modo da puntare alla coda di *pl
    pl = &(*pl)->next;
  // se ho trovato la parola da inserire
  if (*pl != NULL && strcmp((*pl)->dato.parola, s) == 0)
    // incremento il suo contatore
    (*pl)->dato.frequenza++;
  else {
    // creo un nuovo dato
    Dato d;
    strcpy(d.parola, s);
    d.frequenza = 1;
    // lo inserisco in testa ad *pl
    insTesta(pl, d);
  }
}

void stampa(Lista l) {
  while (l != NULL) {
    if (l->dato.frequenza >= 4)
      printf("%s %d\n", l->dato.parola, l->dato.frequenza);
    l = l->next;
  }
}