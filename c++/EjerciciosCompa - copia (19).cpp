#include <stdio.h>

int main(){
	
	int total_muertos, total_vivos, total_hospitales, egresos_muertos, egresos_vivos,i;
	float tasa_mortalidad;
	
	printf("ingrese total de hospitales: ");
	scanf("%d", &total_hospitales);
	
	for(i=1;i<=total_hospitales;i++){
		
		printf("ingrese cantidad de egresos vivos del hospital %d: ", i);
		scanf("%d", &egresos_vivos);
		
		printf("ingrese cantidad de egresos muertos del hospital %d: ", i);
		scanf("%d", &egresos_muertos);
		
		total_muertos= total_muertos + egresos_muertos;
		total_vivos= total_vivos + egresos_vivos;
		
	}
	
	tasa_mortalidad= (float)total_muertos/(total_muertos + total_vivos);
	
	printf("la tasa de mortalidad infantil global de los egresos hospitalarios de todo managua es: %.2f", tasa_mortalidad);
	
	return 0;
	
}
