#include <stdio.h>
#include <stdlib.h>


int main() {
    float peso, altura;
    int sexo, n, i;
    float peso_total = 0;
    float altura_total = 0;
    
    printf("Ingrese el total de personas: ");
    scanf("%i", &n);
    
    for(i = 0; i < n; i++) {
        printf("Ingrese el peso de la persona %i: ", i+1);
        scanf("%f", &peso);
        peso_total = peso_total + peso;
        
        printf("Ingrese la altura de la persona %i: ", i+1);
        scanf("%f", &altura);
        altura_total = altura_total + altura;
        
        printf("Ingrese el sexo de la persona %i: ", i+1);
        printf("\n1. Hombre");
        printf("\n2. Mujer");
        scanf("%i", &sexo);
    }
    
    printf("El promedio de peso es: %.2f", peso_total / n);
    printf("\nEl promedio de altura es: %.2f", altura_total / n);
    printf("\n");
    
    system("pause");
    return 0;
}
