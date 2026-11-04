#include <stdio.h>
 
/*DESCRIPCION
- Leer numero de noches, tipo de habitacion, temporada y numero de huespedes.
- Validar que el tipo sea S, D o E, la temporada sea A o B, las noches sean al menos 1 y los huespedes esten entre 1 y MAX_HUESPEDES.
- Seleccionamos el precio por noche segun el tipo de habitacion.
- Seleccionamos el factor segun la temporada.
- Calculamos el costo de la reserva con noches, precio por noche y factor.
- Restamos el descuento del 5% al costo.
- Finalmente mostramos el desglose completo.*/
 
void main(){

    /*Constantes del ejercicio*/

    const float PRECIO_S = 50.0, PRECIO_D = 80.0, PRECIO_E = 150.0;
    const float FACTOR_TEMPORADA_ALTA = 1.5, FACTOR_TEMPORADA_BAJA = 1.0, MAX_HUESPEDES = 4.0, DESCUENTO = 0.05;

    /*Datos de entrada*/

    float precio_noche = 0.0, factor = 0.0, costo = 0.0;
    float desc_valor = 0.0, total_pagar = 0.0;
    int noches = 0, huespedes = 0;
    int simple = 0, doble = 0, suite = 0, alta = 0, baja = 0;
    int tipo_val = 0, temp_val = 0, noches_val = 0, huesp_val = 0;
    char tipo_hab;
    char temporada;
 
    /*Lectura de datos ingresados*/

    printf ("Ingrese el numero de noches: \n");
    scanf ("%d", &noches);
    printf ("Ingrese el tipo de habitacion (S simple, D doble, E suite): \n");
    scanf (" %c", &tipo_hab);
    printf ("Ingrese la temporada (A alta, B baja): \n");
    scanf (" %c", &temporada);
    printf ("Ingrese el numero de huespedes (MAX 4): \n");
    scanf ("%d", &huespedes);
 
    simple = (tipo_hab == 'S' || tipo_hab == 's');
    doble = (tipo_hab == 'D' || tipo_hab == 'd');
    suite = (tipo_hab == 'E' || tipo_hab == 'e');
    alta = (temporada == 'A' || temporada == 'a');
    baja = (temporada == 'B' || temporada == 'b');
 
    tipo_val = (simple || doble || suite);
    temp_val = (alta || baja);
    noches_val = (noches >= 1);
    huesp_val = (huespedes >= 1 && huespedes <= MAX_HUESPEDES);
 
    /*Condicionales del ejercicio*/

    if (tipo_val && temp_val && noches_val && huesp_val) {
        if (simple) {
            precio_noche = PRECIO_S;
        } else {
            if (doble) {
                precio_noche = PRECIO_D;
            } else {
                precio_noche = PRECIO_E;
            }
        }
 
        if (alta) {
            factor = FACTOR_TEMPORADA_ALTA;
        } else {
            factor = FACTOR_TEMPORADA_BAJA;
        }
 
        /*Procesos y calculos*/

        costo = noches * precio_noche * factor;
        desc_valor = costo * DESCUENTO;
        total_pagar = costo - desc_valor;
 
        /*Resultados*/

        printf ("\nEl numero de noches seleccionadas es:\n %d\n", noches);
        printf ("El numero de huespedes son: \n%d\n", huespedes);
        printf ("El precio por noche es: \n%.2f\n", precio_noche);
        printf ("El factor de temporada es: \n%.2f\n", factor);
        printf ("El costo de la reserva es: \n%.2f\n", costo);
        printf ("El descuento del 5%% es: \n%.2f\n", desc_valor);
        printf ("EL TOTAL A PAGAR ES: \n%.2f\n", total_pagar);
    } else {
        printf ("\n El valor ingresado es INCORRECTO \n");
    }
}