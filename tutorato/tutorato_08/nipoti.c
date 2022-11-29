#include <stdio.h>

void primaSoluzione(){
	int carlo; //carlo
	int antonio; //antonio
	int franco; //franco
	int carloPassato; //carloPassato
	int francoPassato; //francoPassato
	
	int maxAge = 100;
	
	int nCicli = 0;
	
	/*
	franco parla dei suoi nipoti: etafranco > etaNipoti
	antonio ha 3 anni in più di carlo
    Risoluzione aritmetica con un sistema di 5 equazioni in 5 incognite:
    - carlo + 13 = francoPassato
	- francoPassato = carloPassato * 7
    - (franco - francoPassato) = (carlo - carloPassato)
    - antonio = carlo + 4
    - antonio = franco - carlo - 1
	*/
	for(franco = 0; franco < maxAge; franco++){
		for(carlo = 0; carlo < franco; carlo++){
			for(antonio = carlo + 4; antonio < franco; antonio++){
				for(carloPassato = 0; carloPassato < carlo; carloPassato++){
					for(francoPassato = 0; francoPassato < franco; francoPassato++){
						nCicli++;
						if(
							(carlo + 13 == francoPassato) &&
							(francoPassato == carloPassato * 7) &&
							((franco - francoPassato) == (carlo - carloPassato)) &&
							(antonio == carlo + 4) &&
							(antonio == franco - carlo - 1)
							)
							{
								printf("carlo: %d\n",carlo);
								printf("franco: %d\n",franco);
								printf("antonio: %d\n",antonio);
								
								printf("Numero cicli: %d\n",nCicli);
								return;
							}
							
					}
				}
			}
		}
	}
}
/*soluzione più efficiente proposta da un vostro colega*/

void secondaSoluzione(){
	int i, cg, co, fg, fo, annipassati;
    int nCicli=0;
	
	for(i=1; i<=(100/7); i++){
		cg=i;
		fg=cg*7;
		co=fg-13;
		annipassati=co-cg;
		fo=fg+annipassati;
		if(co+4==fo-co-1){
			break;
		}
        nCicli++;
	}
	
	printf("Franco: %d\nCarlo: %d\nAntonio:%d\nNumero di Cicli: %d\n", fo, co, co+4/*ao*/,nCicli);
}

int main(){
	printf("Prima Soluzione:\n");
    primaSoluzione();
    printf("Seconda Soluzione:\n");
    secondaSoluzione();
}