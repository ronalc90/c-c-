#include <stdio.h>
#include <stdlib.h>
int main()
{
	int edad;
	int entrada;
    char salir;
    
    printf("Bienvenido al teatro");
    printf("\nCategoria 1: edad de 6 a 12 años, tiene un descuento del 35%");
    printf("\nCategoria 2: edad de 13 a 18 años, tiene un descuento del 25%");
    printf("\nCategoria 3: edad de 19 a 25 años, tiene un descuento del 15%");
    printf("\nCategoria 4: edad de 26 a 50 años, tiene un descuento del 25%");
    printf("\nCategoria 5: edad de 50 en adelante, tiene un descuento del 35%");
    printf("\nIngrese su edad\n");
    scanf("%d",&edad);
    printf("\nIngrese el precio de la entrada\n");
    scanf("%d",&entrada);
    
    if(edad<=5)
    {
      printf("\nUsted es menor de 6 años, no puede entrar al teatro");
      system("pause");
      exit(1);
    }
    if(edad>=6 && edad<=12)
    {
      printf("\nLa entrada es de %d",entrada-((entrada*35)/100));
      system("pause");
      exit(1);
    }
    if(edad>=13 && edad<=18)
    {
      printf("\nLa entrada es de %d",entrada-((entrada*25)/100));
      system("pause");
      exit(1);
    }
    if(edad>=19 && edad<=25)
    {
      printf("\nLa entrada es de %d",entrada-((entrada*15)/100));
      system("pause");
      exit(1);
    }
    if(edad>=26 && edad<=50)
    {
      printf("\nLa entrada es de %d",entrada-((entrada*25)/100));
      system("pause");
      exit(1);
    }
    if(edad>=50)
    {
      printf("\nLa entrada es de %d",entrada-((entrada*35)/100));
      system("pause");
      exit(1);
    }
    system("pause");
}
