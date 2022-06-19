#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define PROMEDIO 60
#define APROBADO 1
#define REPROBADO 0

int menu();
void calificacion(int *);
void opciones(int, int *);
void imprimir(int *);

int main()
{
    int opcion;
    int alumno[10];
    do
    {
        opcion = menu();
        opciones(opcion, alumno);
    } while (opcion != 3);
    return 0;
}

int menu()
{
    int opcion;
    printf("\n*****Menu*****\n");
    printf("1. Ingresar calificacion\n");
    printf("2. Ver calificacion\n");
    printf("3. Salir\n");
    printf("Ingrese la opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

void opciones(int opcion, int *alumno)
{
    switch (opcion)
    {
    case 1:
        calificacion(alumno);
        break;
    case 2:
        imprimir(alumno);
        break;
    case 3:
        printf("Adios...\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }
}

void calificacion(int *alumno)
{
    int cont;
    int calificacion;
    for (cont = 0; cont < 10; cont++)
    {
        printf("Ingrese la calificacion del alumno %d: ", cont + 1);
        scanf("%d", &calificacion);
        alumno[cont] = calificacion;
    }
}

void imprimir(int *alumno)
{
    int cont;
    int promedio = 0;
    int aprobados = 0;
    int promedio80 = 0;
    for (cont = 0; cont < 10; cont++)
    {
        promedio += alumno[cont];
        if (alumno[cont] >= PROMEDIO)
            aprobados++;
        if (alumno[cont] >= 80)
            promedio80++;
    }
    printf("El promedio de los 10 alumnos es: %d", promedio/10);
    printf("\nEl numero de alumnos aprobados es: %d", aprobados);
    printf("\nEl numero de alumnos que obtuvieron un promedio mayor o igual a 80 es: %d", promedio80);
}
