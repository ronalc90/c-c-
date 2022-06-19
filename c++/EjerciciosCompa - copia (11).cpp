  #include <stdio.h>
  #include <conio.h>
  main()
  {
   int i,n,Total=0;
   float S,Aumento;
   printf("Ingrese la cantidad de empleados: ");
   scanf("%d",&n);
   printf("\n");
   for (i=1;i<=n;i++)
    {
    printf("Ingrese el sueldo del empleado %d: ",i);
    scanf("%f",&S);
    if (S<1000)
     {
      Aumento=S*0.12;
      S+=Aumento;
     }
    else
     {
      if (S>=1000 && S<2000)
       {
        Aumento=S*0.10;
        S+=Aumento;
       }
      else
       {
        Aumento=S*0.08;
        S+=Aumento;
       }
     }
    printf("Su nuevo sueldo es: %.2f\n",S);
    Total+=S;
    }
    printf("\nEl salario total de la empresa es: %d",Total);
    getch();
  }
