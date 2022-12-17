#include <stdio.h> 
#include <math.h> 
#define PI 3.14159

int fatt(int n){ 
    if(n>1)
        return fatt(n-1)*n;
    else   
        return 1;
} 
 

double sinTaylor(double x, int n){ 
    if(n<0){
        return 0;
    }
    else 
        return (pow(-1,n)*pow(x,2*n+1)/fatt(2*n+1) + sinTaylor(x,n-1));

} 

double sinTaylorIterativa(double x, int n){ 
    int k;
    double sommatoria=0;
    
    for(k=0;k<=n; k++ ) {
        sommatoria= sommatoria + pow(-1,k)*pow(x,2*k+1)/fatt(2*k+1);
    }
    return sommatoria;

} 

double sinTaylor2(double x, int n, int k){ 
    if(k>n){
        return 0;
    }
    else 
        return pow(-1,k)*pow(x,2*k+1)/fatt(2*k+1) + sinTaylor2(x,n, k+1);

} 

int main() { 
    double x,ris; 
    int n;
    do{ 
        printf("Inserire angolo in radianti: "); 
        scanf("%lf",&x); 
    }while (x < 0 || x >= 2*PI);

    printf("Inserire grado del polinomio: "); 
    scanf("%d",&n);

    ris = sinTaylor(x,n);
    printf("sinTaylor(%lf,%d) = %lf\n",x,n,ris); 

    ris = sinTaylor2(x,n,0);
    printf("sinTaylor2(%lf,%d) = %lf\n",x,n,ris);

    ris = sinTaylorIterativa(x,n);
    printf("sinTaylorIterativo(%lf,%d) = %lf\n",x,n,ris);
    
    printf("sin(%lf) = %lf\n",x,sin(x)); 
	
	return 0;
}