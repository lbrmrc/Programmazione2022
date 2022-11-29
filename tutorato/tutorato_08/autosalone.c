#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
  char marca[20];  
  int cilindrata;  
  int anno;        
  char cognome[20];
  char nome[20];   
} automobili;

void stampa_elemento(automobili elemento){
	printf("Marca: %s\n", elemento.marca);
	printf("Cilindrata: %d\n", elemento.cilindrata);
	printf("Anno: %d\n", elemento.anno);
	printf("Cognome: %s\n", elemento.cognome);
	printf("Nome: %s\n", elemento.nome);
}

int inserisci (automobili t_a[], int dl){
	printf("Inserire la marca:\n");
	scanf("%s", t_a[dl].marca);

	printf("Inserire la cilindrata:\n");
	scanf("%d", &t_a[dl].cilindrata);

	if (t_a[dl].cilindrata < 800 || t_a[dl].cilindrata>2500)
		return 1;

	printf("Inserire l'anno di immatricolazione:\n");
	scanf("%d", &t_a[dl].anno);

	if (t_a[dl].anno < 2010 || t_a[dl].anno>2019)
		return 1;

	printf("Inserire il cognome dell'acquirente:\n");
	scanf("%s", t_a[dl].cognome);
	
	printf("Inserire il nome dell'acquirente:\n");
	scanf("%s", t_a[dl].nome);

    return 0;
}

int ricerca(automobili t_a[], int dl, char *marca){
	int i, trovato =1;

	for(i=0;i<dl;i++){
		if(!strcmp(t_a[i].marca, marca)){
			stampa_elemento(t_a[i]);
			trovato = 0;
		}
	}
	return trovato;
}
int conta_auto(automobili t_a[], int dl, int anno){
	int i, count=0;
	for (i=0; i<dl; i++)
		if(t_a[i].anno==anno)
			count++;
	return count;
}

int main(){
 	int i,n,anno;
 	automobili autosalone[MAX]; /*tabella autosalone di tipo automobili che al più contiene 10 elementi*/
 	char marca[20];
	int scelta;

	do{
		printf("Inserire il numero di auto che si vogliono registrare\n");
		scanf("%d", &scelta);
	} while(scelta>MAX);

	for(i = 0; i< scelta; i++){
		if(inserisci(autosalone, i))
    		printf("Errore nell'inserimento dei dati \n");
	}
 	

 	printf("\nQuale marca di auto cerchi?:");
 	scanf("%s", marca);

	if(ricerca(autosalone, scelta, marca))
		printf("Auto non trovata\n");
 
 	printf("\n\nProprietari con auto di cilindrata maggiore di 1800 cc:");
 	for (i=0; i<scelta; i++)
		if(autosalone[i].cilindrata>1800)
	 		printf(" %s", autosalone[i].cognome);

	printf("\n\nInserire l'anno di immatricolazione:");
	scanf("%d", &anno);
	printf("Le auto immatricolate nell'anno %d sono: %d\n",anno, conta_auto(autosalone, scelta,anno));

    return 0;
}