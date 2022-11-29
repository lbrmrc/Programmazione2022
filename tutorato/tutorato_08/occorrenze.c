#include <stdio.h>
#define MAX 100
int occorrenze(int *a, int dimArray, int *elementoPiuRipetuto){
    int i,j;
    int contatoreTemp, contatoreMax=0, valRipetuto;

    for(i=0;i<dimArray;i++){
        contatoreTemp=0;
        for(j=i;j<dimArray;j++){
            if(a[i]==a[j]){
                contatoreTemp++;
            }
        }

        if(contatoreTemp>contatoreMax){
            contatoreMax=contatoreTemp;
            valRipetuto=a[i];
        }
    }

    *elementoPiuRipetuto = valRipetuto;

    return contatoreMax;
}

/*
soluzione migliorata
Si può sfruttare il fatto che il valore degli elementi inseriti sia < K 
*/
int occorrenzeMigliorato(int *a, int numeroElementi, int *elementoPiuRipetuto, int K){
	int supporto[K]; 
	int i;
	int maxTemp = 0;
	int maxElemento;
	
    for(i=0;i<K;i++){
        supporto[i]=0;
    }
	for(i = 0; i < numeroElementi; i++) {
		supporto[a[i]]++;
	}
	
	for(i = 0; i < K; i++) {
		if(supporto[i] > maxTemp) {
			maxElemento = i;
			maxTemp = supporto[i];
		}
	}
	
	*elementoPiuRipetuto = maxElemento;
	
	return supporto[maxElemento];
	
}

int main(){
    	int a[MAX];
	int elementoPiuRipetutoBase;
	int elementoPiuRipetutoMigliorato;
	int contatoreBase;
	int contatoreMigliorato;
	int numeroElementi,numMax;
	int i;
	
	printf("Inserire numero elementi: ");
	scanf("%d",&numeroElementi);

    printf("Inserire il valore massimo: ");
	scanf("%d",&numMax);

	for(i = 0; i < numeroElementi; i++) {
		printf("Inserire elemento %d: ",i);
		scanf("%d",&a[i]);
	}
	
	contatoreBase = occorrenze(a, numeroElementi, &elementoPiuRipetutoBase);
	contatoreMigliorato = occorrenzeMigliorato(a, numeroElementi, &elementoPiuRipetutoMigliorato, numMax);

	printf("Base: Numero:%d Ripetizioni:%d\n",elementoPiuRipetutoBase,contatoreBase);
	printf("Migliorato: Numero:%d Ripetizioni:%d\n",elementoPiuRipetutoMigliorato,contatoreMigliorato);
		
	return 0;

}