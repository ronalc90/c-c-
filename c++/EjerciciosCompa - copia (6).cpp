#include<stdio.h>
int main(){
int n,edad;

printf("Indique el numero de personas que seran evaluadas: ");
scanf("%i",&n);

for(int i=0;i<n;i++){
printf("\nIngrese la edad de la persona %i: ",i+1);
scanf("%i",&edad);

if(edad<13){
printf("La persona es un niño\n");
}else if(edad>13 && edad<=25){
printf("La persona es un joven\n");
}else if(edad>25){
printf("La persona es un adulto\n");
}
}
}
