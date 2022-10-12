#include <stdio.h>

main() {
  int pin;
  int n_tentativi = 0;  // numero tentativi effettuati
  do {
    scanf("%d", &pin);
    n_tentativi++;
  } while (pin != 44122 &&
           n_tentativi <
               3);  // l'utente ha sbagliato e ha tentato meno di 3 volte
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}
