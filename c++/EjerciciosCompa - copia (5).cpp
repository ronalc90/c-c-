#include <stdio.h>

int main(void)
{
    int N,i;
    float prom;
    char nombre[30];
    float nota1,nota2,nota3;
    
    printf("Ingrese el numero de alumnos:");
    scanf("%d", &N);
    
    for (i=1;i<=N;i++)
    {
        printf("Ingrese el nombre del estudiante:");
        scanf("%s", nombre);
        
        printf("Ingrese la nota del examen 1:");
        scanf("%f", &nota1);
        
        printf("Ingrese la nota del examen 2:");
        scanf("%f", &nota2);
        
        printf("Ingrese la nota del examen 3:");
        scanf("%f", &nota3);
        
        prom=(nota1+nota2+nota3)/3;
        
        printf("El promedio del estudiante %s es %f\n",nombre,prom);
    }
    
}
