#include <stdio.h>
#include <stdlib.h>

#include "listaEsami.h"

void nuova_lista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, Dato d) {
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista* pl, Record r) {
  while (*pl != NULL && (*pl)->dato.matricola != r.matricola)
    pl = &(*pl)->next;

  if (*pl == NULL) {
    Dato d;
    d.matricola = r.matricola;
    d.voto_pratico = -1;
    d.voto_teorico = -1;

    insTesta(pl, d);
  }

  if (r.tipo == 'P')
    (*pl)->dato.voto_pratico = r.voto;
  else
    (*pl)->dato.voto_teorico = r.voto;
}

int precede(Dato d1, Dato d2) {
  if (((d1.voto_pratico < 12 || d1.voto_teorico < 6) &&
       (d2.voto_pratico < 12 || d2.voto_teorico < 6)) ||
      d1.voto_pratico + d1.voto_teorico == d2.voto_pratico + d2.voto_teorico)
    return d1.matricola > d2.matricola;
  else
    return d1.voto_pratico + d1.voto_teorico >
           d2.voto_pratico + d2.voto_teorico;
}

void insOrd(Lista* pl, Dato d) {
  while (*pl != NULL && precede((*pl)->dato, d))
    pl = &(*pl)->next;
  insTesta(pl, d);
}

Lista insertionSort(Lista l) {
  Lista l2;
  while (l != NULL) {
    insOrd(&l2, l->dato);
    l = l->next;
  }
  return l2;
}

void stampa(Lista l) {
  while (l != NULL) {
    printf("%d: ", l->dato.matricola);
    // stampa singolo risultato
    if (l->dato.voto_pratico >= 12 && l->dato.voto_teorico >= 6)
      if (l->dato.voto_pratico + l->dato.voto_teorico > 30)
        printf("30 e lode");
      else
        printf("%d", l->dato.voto_pratico + l->dato.voto_teorico);
    else
      printf("Non superato");

    printf("\n");
    l = l->next;
  }
}
