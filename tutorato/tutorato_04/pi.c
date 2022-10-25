#include <stdio.h>

main(){
    int i, numIterazioni;

    float piValue=0;

    printf("Indicare il numero di iterazioni:\n");
    scanf("%d",&numIterazioni);

    for(i=0; i<numIterazioni;i++){
        if(i%2==0){
            piValue = piValue + ((float)1)/(2*i+1);
        }
        else
            piValue = piValue - ((float)1)/(2*i+1);
    }

    printf("Valore di pi = %.2f\n", 4*piValue);

}