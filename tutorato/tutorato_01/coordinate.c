#include <stdio.h>

main(){
    int x, y;

    printf("Inserire le coordinate del piano x y:  ");
    scanf("%d %d", &x, &y);

	if(x > 0 && y > 0){
		printf("Primo quadrante\n");
	}
	else if(x < 0 && y > 0){
		printf("Secondo quadrante\n");
	}
	else if(x < 0 && y < 0){
		printf("Terzo quadrante\n");
	}
	else if(x > 0 && y < 0){
		printf("Quarto quadrante\n");
	}
    else if(x==0 && (y>0 || y<0)){
		printf("Punto sull'asse y\n");
	}
	else if((x > 0 || x < 0) && y == 0){
		printf("Punto sull'asse x\n");
	}
	else if(x == 0 && y== 0){
		printf("Origine\n");
	}

}