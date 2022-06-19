#include<stdio.h>
#include<stdlib.h>

int main()
{
int num1,num2;

printf("Teclea el primer numero: ");
scanf("%d",&num1);

printf("Teclea el segundo numero: ");
scanf("%d",&num2);

printf("La tabla de multiplicar del numero %d es: \n",num1);
for(int i=1;i<=10;i++)
{
printf("%d x %d = %d \n",num1,i,num1*i);
}

printf("La tabla de multiplicar del numero %d es: \n",num2);
for(int i=1;i<=10;i++)
{
printf("%d x %d = %d \n",num2,i,num2*i);
}

return 0;
}
