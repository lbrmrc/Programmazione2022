#include <stdio.h>

main(){
    int misura;
    float mis_conv;
    char scelta;

    do{

        printf("Scegli il tipo di conversione ('l' per lunghezza, 'm' per massa, 'q' per uscire\n)");
        scanf(" %c", &scelta);

        if(scelta!='q'){
            printf("Inserire la misura\n");
            scanf("%d", &misura);



            if(scelta=='l'){
                mis_conv = misura/1.609;
                printf("%d chilometri corrispondo a %.2f miglia\n", misura,mis_conv);
            }
            else
                if(scelta=='m'){
                    mis_conv = misura*2.205;
                    printf("%d chili corrispondo a %.2f libbre\n", misura,mis_conv);
                }
        }
    }while(scelta!='q');

}