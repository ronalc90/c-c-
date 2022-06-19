#include <stdio.h>
#include <stdlib.h>


int main()
{
    int saldo_inicial;
    int codigo_transaccion;
    int cant_debito;
    int cant_credito;
    int saldo_actual;

    printf("Ingrese su saldo inicial: ");
    scanf("%d", &saldo_inicial);

    int i;
    for (i = 0; i < 20; i++)
    {
        printf("Ingrese su codigo de transaccion (1 para debito, 0 para credito): ");
        scanf("%d", &codigo_transaccion);

        if (codigo_transaccion == 1)
        {
            printf("Ingrese su cantidad de debito: ");
            scanf("%d", &cant_debito);
            saldo_actual = saldo_inicial + cant_debito;
            saldo_inicial = saldo_actual;
        }
        else
        {
            printf("Ingrese su cantidad de credito: ");
            scanf("%d", &cant_credito);
            saldo_actual = saldo_inicial - cant_credito;
            saldo_inicial = saldo_actual;
        }
    }
    printf("Su saldo actual es: %d", saldo_actual);
    return 0;
}
