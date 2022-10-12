// ERRATO

#include <stdio.h>

main() {
  int pin;
  int n_tentativi = 0;  // numero tentativi effettuati
  if (pin != 44122)
    do {
      scanf("%d", &pin);
      n_tentativi++;
    } while (n_tentativi <
             3);  // l'utente ha sbagliato e ha tentato meno di 3 volte
  else
    printf("Accesso negato\n");
}
