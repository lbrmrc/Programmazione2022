#include <stdio.h>

int main(){
    int bambini[100]={0};
    int n, k,i=0,j=0, conta_bambini, contatore=1;

    printf("Inserire il numero di bambini\n");
    scanf("%d",&n);

    printf("Inserire il numero di salti\n");
    scanf("%d", &k);

    conta_bambini=n;
    while(conta_bambini>1){
        if(bambini[i]==0 && contatore==k){
            bambini[i]=1;
            conta_bambini--;
            contatore=1;
        }

        if(bambini[i]==0){
            contatore++;
        }

        if(i==n-1){
            i=0;
        }
        else
            i++;

    }

    printf("Il bambino escluso è:\n");

    for(i=0;i<n;i++){
        if(bambini[i]==0){
            printf("%d\n",i+1);
        }
    }
}