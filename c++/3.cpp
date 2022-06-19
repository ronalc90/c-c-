#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int N=0;
	printf("Introduzca la cantidad de estudiantes: ");
	scanf("%d",&N);
	int calificaciones[N];
	char nombres[N][30];
	for (int i=0; i<N; i++) {
		printf("Estudiante N.%d \n",i+1);
		printf("Introduzca su nombre: ");
		scanf("%s",&nombres[i]);
		printf("Introduzca su calificacion: ");
		scanf("%d",&calificaciones[i]);
		printf("\n");
	}
	
	printf("Los estudiantes con calificacion de al menos 90 son los siguientes: \n");
	for (int j=0; j<N; j++) {
		if (calificaciones[j]>=90) {
			printf("+ Nombre: %s \n",nombres[j]);
			printf("+ Calificacion: %d \n",calificaciones[j]);
			printf("\n");
		}
	}

	return 0;
}
