#include <stdio.h>

int main()
{
	int cantVend, cantAuto, i;
	float comision, salario, precioAuto;
	
	printf("Ingrese la cantidad de vendedores: ");
	scanf("%d", &cantVend);
	
	for (i = 1; i <= cantVend; i++)
	{
		salario = 1500;
		comision = 0;
		
		printf("\nIngrese la cantidad de autos vendidos por el vendedor %d: ", i);
		scanf("%d", &cantAuto);
                for (int j=1;j<=cantAuto;j++)
                {
                    printf("\nIngrese el precio de uno de los autos vendidos por el vendedor %d:",i);
                    scanf("%f",&precioAuto);
                }
		comision = (cantAuto * 250) + (cantAuto * precioAuto * 0.01);
		salario = 1500 + comision;
		
		printf("\nEl salario del vendedor %d es de $%.2f\n", i, salario);
	}
	
	return 0;
}
