#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,i=1,num,ceros=0,positivos=0,negativos=0,suma=0;
	printf("Ingresar N:");
	scanf("%d",&N);
	while(i<=N)
	{
		printf("Ingrese un numero:");
		scanf("%d",&num);
		if(num==0)
		{
			ceros++;
		}
		else if(num<0)
		{
			negativos++;
		}
		else
		{
			positivos++;	
		}
		suma+=num;
		i++;
	}
	printf("Cantidad de ceros: %d\n",ceros);
	printf("Cantidad de positivos: %d\n",positivos);
	printf("Cantidad de negativos: %d\n",negativos);
	printf("La suma es: %d",suma);
	return 0;
}
