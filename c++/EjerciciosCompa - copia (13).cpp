#include <stdio.h>

int main ()
{
   int nro, i, cant_rojos=0, cant_blancos=0, cant_otros=0;
   float porc_rojos, porc_blancos, porc_otros;

   for (i=1; i<=25; i++)
   {
      printf ("\nVehiculo numero %d.\n", i);
      printf ("Ingrese el numero que corresponde al color del vehiculo:\n");
      printf ("1-Rojo\n2-Blanco\n3-Otro\n");
      scanf ("%d", &nro);

      if (nro==1)
      {
         cant_rojos=cant_rojos+1;
      }

      else
      {
         if (nro==2)
         {
            cant_blancos=cant_blancos+1;
         }
         else
         {
            cant_otros=cant_otros+1;
         }
      }
   }

   porc_rojos=(float)cant_rojos*100/25;
   porc_blancos=(float)cant_blancos*100/25;
   porc_otros=(float)cant_otros*100/25;

   printf ("\nPorcentaje de vehiculos de color rojo: %.2f %%.", porc_rojos);
   printf ("\nPorcentaje de vehiculos de color blanco: %.2f %%.", porc_blancos);
   printf ("\nPorcentaje de vehiculos de otro color: %.2f %%.", porc_otros);

   return 0;
}
