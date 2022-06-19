#include <stdlib.h>
#include <stdio.h>


int main()
{
    int n,a,c1,c2,c3;
    printf("Ingrese el numero de ventas:");
    scanf("%d",&n);
    c1=c2=c3=0;
    for(int i=0;i<n;i++){
        printf("Ingrese monto de la venta:");
        scanf("%d",&a);
        if(a<=200)
            c1++;
        else if(a>200 && a<400)
            c2++;
        else
            c3++;
    }
    printf("Cantidad de ventas menores o iguales a 200: %d\n",c1);
    printf("Cantidad de ventas mayores a 200 y menores a 400: %d\n",c2);
    printf("Cantidad de ventas mayores o iguales a 400: %d",c3);
    system("pause");
}
