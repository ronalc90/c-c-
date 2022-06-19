#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int num;
    int mayor = -9999;

    printf("Ingrese la cantidad de numeros a evaluar: ");
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        if(num>mayor){
            mayor=num;
        }
    }

    printf("El mayor es %d",mayor);
    return 0;
}
