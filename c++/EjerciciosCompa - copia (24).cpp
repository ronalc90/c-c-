#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,*Voltaje;
    float Maximo,Minimo,Promedio,Suma;

    printf("Cuantos voltajes va a ingresar?:.\n");
    scanf("%d", &N);
    
    Voltaje=(int*)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        printf("Ingrese el voltaje numero. %d \n", i+1);
        scanf("%d",(Voltaje+i));
    }
    Maximo = *Voltaje;
    Minimo = *Voltaje;
    Suma = *Voltaje;
    for(i=1;i<N;i++)
    {
        if(*(Voltaje+i)>Maximo)
        {
            Maximo= *(Voltaje+i);
        }
        if(*(Voltaje+i)<Minimo)
        {
            Minimo= *(Voltaje+i);
        }
        Suma = Suma + *(Voltaje+i);
    }
    Promedio = Suma/N;
    printf("El dato maximo es: %.2f \n", Maximo);
    printf("El dato minimo es: %.2f \n", Minimo);
    printf("El promedio es: %.2f \n", Promedio);
    return 0;
}
