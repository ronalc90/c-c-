#include <stdio.h>
int main()
{
	int i, n, contador=0;
	int ganados[6], perdidos[6], empatados[6];
	for(i=0;i<6;i++)
	{
		printf("ingrese la cantidad de partidos ganados del equipo %d: ",i+1);
		scanf("%d",&ganados[i]);
		printf("ingrese la cantidad de partidos perdidos del equipo %d: ",i+1);
		scanf("%d",&perdidos[i]);
		printf("ingrese la cantidad de partidos empatados del equipo %d: ",i+1);
		scanf("%d",&empatados[i]);
	}
	for(i=0;i<6;i++)
	{
		contador=ganados[i]+perdidos[i]+empatados[i];
		if(contador!=20)
		{
			printf("el equipo %d no jugo correctamente",i+1);
			i=6;
		}
	}
	if(contador==20)
	{
		for(i=0;i<6;i++)
		{
			printf("partidos ganados por el equipo %d: %d\n",i+1,ganados[i]);
			printf("partidos perdidos por el equipo %d: %d\n",i+1,perdidos[i]);
			printf("partidos empatados por el equipo %d: %d\n",i+1,empatados[i]);
		}
	}
}

