#include <stdio.h>
 
/*DESCRIPCION
- Leer el consumo en kWh y el tipo de usuario (R, C o I).
- Validar que el tipo de usuario sea R, C o I y que el consumo no sea negativo.
- Seleccionamos el tramo segun el consumo.
- Calculamos el costo de cada tramo con expresiones aritmeticas.
- Sumamos los costos de los tramos y lo asignamos a costo_total.
- Restamos un descuento del 5% al resultado final.
- Mostramos el detalle y las conclusiones.*/
 
void main(){

    /*Constantes del ejercicio*/

    const float TRAMO_1 = 100.0, TRAMO_2 = 200.0, DESCUENTO = 0.05;
    const float TARIFA_1R = 0.15, TARIFA_2R = 0.20, TARIFA_3R = 0.25;

    /*Datos de entrada*/

    float consumo = 0.0, kwh1 = 0.0, kwh2 = 0.0, kwh3 = 0.0;
    float costo1 = 0.0, costo2 = 0.0, costo3 = 0.0;
    float costo_total = 0.0, desc_valor = 0.0, total_pagar = 0.0;
    int tramo1 = 0, tramo2 = 0, tramo3 = 0, tipo_val = 0, consumo_val = 0;
    char tipo;
 
    /*Lectura de datos ingresados*/

    printf ("Ingrese el consumo en kWh: \n");
    scanf ("%f", &consumo);
    printf ("Ingrese el tipo de usuario Residencial (R), Comercial (C) o Industrial (I): \n");
    scanf (" %c", &tipo);
 
    tipo_val = (tipo == 'R' || tipo == 'r' || tipo == 'C' || tipo == 'c'|| tipo == 'I' || tipo == 'i');
    consumo_val = (consumo >= 0);
    tramo1 = (consumo <= TRAMO_1);
    tramo2 = (consumo > TRAMO_1 && consumo <= TRAMO_2);
    tramo3 = (consumo > TRAMO_2);
 
    /*Condicionales del ejercicio*/

    if (tipo_val && consumo_val) {
        if (tramo1) {
            kwh1 = consumo;
            kwh2 = 0.0;
            kwh3 = 0.0;
        } else {
            if (tramo2) {
                kwh1 = TRAMO_1;
                kwh2 = consumo - TRAMO_1;
                kwh3 = 0.0;
            } else {
                kwh1 = TRAMO_1;
                kwh2 = TRAMO_2 - TRAMO_1;
                kwh3 = consumo - TRAMO_2;
            }
        }
 
        /*Procesos y calculos*/

        costo1 = kwh1 * TARIFA_1R;
        costo2 = kwh2 * TARIFA_2R;
        costo3 = kwh3 * TARIFA_3R;
 
        costo_total = costo1 + costo2 + costo3;
        desc_valor = costo_total * DESCUENTO;
        total_pagar = costo_total - desc_valor;
 
        /*Resultados*/

        printf ("\nEl consumo ingresado es: %.2f kWh\n", consumo);
        printf ("\nTRAMO 1\n");
        printf ("Los kWh del tramo 1 son: %.2f\n", kwh1);
        printf ("El costo del tramo 1 es: %.2f\n", costo1);
        printf ("\nTRAMO 2\n");
        printf ("Los kWh del tramo 2 son: %.2f\n", kwh2);
        printf ("El costo del tramo 2 es: %.2f\n", costo2);
        printf ("\nTRAMO 3\n");
        printf ("Los kWh del tramo 3 son: %.2f\n", kwh3);
        printf ("El costo del tramo 3 es: %.2f\n", costo3);
        printf ("\nEL COSTO TOTAL ES: %.2f\n", costo_total);
        printf ("El descuento del 5%% es: %.2f\n", desc_valor);
        printf ("El total a pagar es: %.2f\n", total_pagar);
 
        /*Conclusiones*/ 

        printf ("\n-------------------------CONCLUSIONES-------------------------\n");
        if (tramo1) {
            printf ("El consumo se ubica en el tramo 1 (tarifa mas baja)\n");
        } else {
            if (tramo2) {
                printf ("El consumo se ubica en el tramo 2 (tarifa media)\n");
            } else {
                printf ("El consumo se ubica en el tramo 3 (tarifa mas alta)\n");
            }
        }
        printf ("Con el descuento se ahorra: %.2f\n", desc_valor);
        printf ("El valor final a pagar es: %.2f\n", total_pagar);
    } else {
        printf ("El valo ingresado es INCORRECTO (tipo R, C o I y consumo mayor o igual a 0)\n");
    }
}