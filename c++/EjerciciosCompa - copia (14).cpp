#include <stdio.h>
int main(){
	int n;
	float x, media, varianza, suma=0, suma2=0, desviacion;
	printf("Escriba la cantidad de n�meros a calcular: ");
	scanf("%d",&n);
	printf("Escriba %d n�meros: \n",n);
	for(int i=1;i<=n;i++){
		scanf("%f",&x);
		suma=suma+x;
		suma2=suma2+((x-media)*(x-media));
	}
	media=suma/n;
	varianza=suma2/n;
	desviacion=varianza;
	printf("La media es: %f \n", media);
	printf("La varianza es: %f \n", varianza);
	printf("La desviaci�n est�ndar es: %f \n", desviacion);
}
