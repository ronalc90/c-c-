
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total = 0;
    float promedio = 0;
    float peso = 0;
    float pesoN = 0;
    float pesoJ = 0;
    float pesoA = 0;
    float pesoV = 0;
    int contador = 0;
    int contadorN = 0;
    int contadorJ = 0;
    int contadorA = 0;
    int contadorV = 0;
    int edad = 0;

    while (contador <= 100)
    {
         printf("ingrese el peso en kilogramos: ");
        scanf("%f", &peso);
        total = total + peso;
        printf("ingrese la edad: ");
        scanf("%i", &edad);

        if (edad <= 12)
        {
            pesoN = pesoN + peso;
            contadorN = contadorN + 1;
        }
        else if (edad >= 13 && edad <= 29)
        {
            pesoJ = pesoJ + peso;
            contadorJ = contadorJ + 1;
        }
        else if (edad >= 30 && edad <= 59)
        {
            pesoA = pesoA + peso;
            contadorA = contadorA + 1;
        }
        else if (edad >= 60)
        {
            pesoV = pesoV + peso;
            contadorV = contadorV + 1;
        }
        contador = contador + 1;
    }
    promedio = total / contador;
    printf("el promedio de los 100 es: %f\n", promedio);
    printf("el promedio de los niños es: %f\n", pesoN / contadorN);
    printf("el promedio de los jóvenes es: %f\n", pesoJ / contadorJ);
    printf("el promedio de los adultos es: %f\n", pesoA / contadorA);
    printf("el promedio de los viejos es: %f\n", pesoV / contadorV);
}
