typedef enum { Lun= 1, Mar, Mer, Gio, Ven, Sab, Dom } Giorni;

int main() {
  Giorni giorno;
  float pagaOraria = 15.4;
  float paga[7], ore[7] = {8.0, 7.5, 0.0, 4.5, 6.0, 8.0, 8.0};
  for (giorno = Lun; giorno <= Dom; giorno++) {
    int indice = giorno - Lun;
    if ((giorno == Sab) || (giorno == Dom))
      paga[indice] = ore[indice] * pagaOraria * 1.5;
    else
      paga[indice] = ore[indice] * pagaOraria;
  }
  return 0;
}