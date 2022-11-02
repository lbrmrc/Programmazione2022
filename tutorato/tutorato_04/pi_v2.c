#include <stdio.h>

main(){
    int i, numIterazioni,denominatore=1,numeratore=1;

    float piValue=0;

    printf("Indicare il numero di iterazioni:\n");
    scanf("%d",&numIterazioni);

    for(i=0;i<numIterazioni; i++){
        piValue = piValue + ((float) numeratore)/denominatore;
        denominatore = denominatore+2;
        numeratore = -1*numeratore;
    }

    printf("Valore di pi = %.2f\n", 4*piValue);
}