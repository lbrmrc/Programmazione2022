#include <stdio.h>
float piGreco(int numIterazioni){
    int i;
    float piValue=0;

    for(i=0; i<numIterazioni;i++){
    if(i%2==0){
            piValue = piValue + ((float)1)/(2*i+1);
        }
    else
            piValue = piValue - ((float)1)/(2*i+1);
    }

    return 4*piValue;
}


float diametroCerchio(int raggio){
    return 2.0*raggio;
}

float perimetroCerchio(int raggio){
    return 2*raggio*piGreco(100);
}

float areaCerchio(int raggio){
    return raggio*raggio*piGreco(100);
}

int power(int base, int esponente){
    int i, pow=1;

    if(esponente<0){
        return -1;
    }

    /*if(esponente==0){
        return 1;
    }*/

    for(i=1;i<=esponente;i++){
        pow= pow * base;
    }

    return pow;

}

int main(){
    int raggio, base, esponente;

    int pow;

    printf("Inserire il raggio\n");
    scanf("%d",&raggio);

    printf("Diametro: %2.f\nArea: %.2f \nPerimetro: %.2f\n", diametroCerchio(raggio), areaCerchio(raggio), perimetroCerchio(raggio));

    printf("Inserire base ed esponente per il calcolo della potenza\n");
    scanf("%d %d",&base,&esponente);

    pow=power(base, esponente);

    if(pow<0){
        printf("Errore: inserito esponente negativo\n");
    }
    else
        printf("Potenza: %d\n", pow);

    return 0;
}