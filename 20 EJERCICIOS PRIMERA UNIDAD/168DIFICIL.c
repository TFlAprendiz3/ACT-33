#include <stdio.h>

/*DESCRIPCION

- Leer el mes y el precio de ropa (R), electronica (E) y alimentos (A).
- Validar que el mes este entre 1 y 12.
- Seleccionamos el descuento de temporada segun el mes (rebajas, black friday o navidad).
- Calculamos el precio con descuento de temporada de cada producto.
- Restamos un descuento adicional del 5% al resultado de cada producto.
- Sumamos los precios finales para obtener el total.
- Finalmente mostramos el desglose completo.*/


void main(){

    /*Constantes del ejercicio*/

    const float DESC_REBAJAS = 0.50, DESC_BLACK_FRIDAY = 0.30, DESC_NAVIDAD = 0.20;
    const int MES_REBAJAS = 7, MES_BLACK = 11, MES_NAVIDAD = 12;
    const float DESCUENTO = 0.05;

    /*Datos de entrada*/

    float descuento = 0.0;
    float precio1 = 0.0, precio2 = 0.0, precio3 = 0.0;
    float con_desc1 = 0.0, con_desc2 = 0.0, con_desc3 = 0.0;
    float extra1 = 0.0, extra2 = 0.0, extra3 = 0.0;
    float final1 = 0.0, final2 = 0.0, final3 = 0.0, total = 0.0;
    int rebajas = 0, black = 0, navidad = 0, mes_val = 0;
    int mes;

    printf("---------------------------------------\n");
    printf("Bienvenido a la Agencia de Viajes\n");
    printf("---------------------------------------\n");

    /*Lectura de datos ingresados*/

    printf("Ingrese el mes actual (1-12): \n");
    scanf("%d", &mes);
    printf("Ingrese el precio de la Ropa: \n");
    scanf("%f", &precio1);
    printf("Ingrese el precio de Electronica: \n");
    scanf("%f", &precio2);
    printf("Ingrese el precio de Alimentos: \n");
    scanf("%f", &precio3);

    rebajas = (mes == MES_REBAJAS);
    black   = (mes == MES_BLACK);
    navidad = (mes == MES_NAVIDAD);
    mes_val = (mes >= 1 && mes <= 12);

    /*Condicionales del ejercicio*/

    if (mes_val) {
        if (rebajas) {
            descuento = DESC_REBAJAS;
        } else {
            if (black) {
                descuento = DESC_BLACK_FRIDAY;
        } else {
            if (navidad) {
                 descuento = DESC_NAVIDAD;
        } else {
                descuento = 0.0;
                }
            }
        }

        /* Procesos y calculos */

        con_desc1 = precio1 - (precio1 * descuento);
        con_desc2 = precio2 - (precio2 * descuento);
        con_desc3 = precio3 - (precio3 * descuento);

        extra1 = con_desc1 * DESCUENTO;
        extra2 = con_desc2 * DESCUENTO;
        extra3 = con_desc3 * DESCUENTO;

        final1 = con_desc1 - extra1;
        final2 = con_desc2 - extra2;
        final3 = con_desc3 - extra3;

        total = final1 + final2 + final3;

        /* Resultados */

        printf ("--------------------DESGLOSE--------------------\n");
        printf("\nROPA\n");
        printf("El precio original es: %.2f\n", precio1);
        printf("El precio con descuento es: %.2f\n", con_desc1);
        printf("El descuento adicional 5%% es: %.2f\n", extra1);
        printf("El precio final es: %.2f\n", final1);

        printf("\nELECTRONICA\n");
        printf("El precio original es: %.2f\n", precio2);
        printf("El precio con descuento es: %.2f\n", con_desc2);
        printf("El descuento adicional 5%% es: %.2f\n", extra2);
        printf("El precio final es: %.2f\n", final2);

        printf("\nALIMENTOS\n");
        printf("El precio original es: %.2f\n", precio3);
        printf("El precio con descuento es: %.2f\n", con_desc3);
        printf("El descuento adicional 5%% es: %.2f\n", extra3);
        printf("El precio final es: %.2f\n", final3);

        printf("\nEL TOTAL A PAGAR ES: %.2f\n", total);
    } else {
        printf("El mes es ingresado es INCORRECTO\n");
    }
}