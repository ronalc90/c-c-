#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//variables
	int numA;
	int numB;
	int numC;
	int i;
	//captura de datos
	numA=0;
	numB=0;
	numC=0;
	i=0;

	printf("Programa que analiza las notas de los estudiantes.\n");

	for(i=0; i<4; i++)
	{
		int nota;
		printf("Ingresa la nota del estudiante %d: ", i+1);
		scanf("%d", &nota);

		if(nota>=0 && nota<=59)
			numA++;
		else if(nota>=60 && nota<=80)
			numB++;
		else if(nota>=81 && nota<=100)
			numC++;
		else
			printf("Esa nota no es valida.\n");
	}

	printf("Numero de estudiantes que obtuvieron notas entre 0 y 59: %d\n", numA);
	printf("Numero de estudiantes que obtuvieron notas entre 60 y 80: %d\n", numB);
	printf("Numero de estudiantes que obtuvieron notas entre 81 y 100: %d\n", numC);

	return 0;
}
