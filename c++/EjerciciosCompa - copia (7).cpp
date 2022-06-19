#include <stdio.h>
#include <stdlib.h>

int main()
{
    float descuento=0.15;
    int cantidad=0,unidades=0,i=0;
    float importe=0,importe_final=0,total=0;

    for(i=0;i<15;i++)
    {
        printf("Ingrese la cantidad de kilos que desea comprar: ");
        scanf("%d",&cantidad);

        importe=cantidad*35;

        if(cantidad>10)
        {
            importe_final=importe-importe*descuento;
            printf("\nEl importe a pagar por %d kilos de naranjas es: $%.2f\n",cantidad,importe_final);
        }
        else
        {
            printf("\nEl importe a pagar por %d kilos de naranjas es: $%.2f\n",cantidad,importe);
        }
        total=total+importe;
    }
    printf("\nLa suma total de importes es: $%.2f",total);
    return 0;
}
