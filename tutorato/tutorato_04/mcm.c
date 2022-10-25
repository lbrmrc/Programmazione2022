#include <stdio.h>

int mcm(int numero1, int numero2){
    int massimo,minimo, multiplo;
    int i=1;

    massimo=(numero1>numero2?numero1:numero2);
    minimo=(numero1<numero2?numero1:numero2);

    for(i=massimo;i<=numero2*numero1;i++){
        if(i%numero1==0 && i%numero2==0)
            return i;
    }

/*
    if(numero1>numero2){
        massimo=numero1;

    }
    else{
        massimo=numero2;

    }


    /*
    while(multiplo%numero1!=0 || multiplo%numero2!=0){
        multiplo=massimo*i;
        i++;
    }

    return multiplo;
    */
}

int main(){
    int a, b;

    printf("Inserire due numri interi\n");
    scanf("%d %d",&a,&b);

    printf("l'mcm e' %d\n", mcm(a,b));

    return 0;

}