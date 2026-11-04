#include <stdio.h>
#include <stdlib.h>

/*DESCRIPCION:
- Leer piso actual, piso destino, numero de pisos y capacidad.
- Validar que el destino este entre PISO_MIN y num_pisos y que la capacidad no exceda CAPACIDAD_MAX.
- Calculamos los pisos recorridos con abs(destino - actual).
- Determinamos la direccion (SUBE, BAJA o SIN MOVIMIENTO).
- Aplicamos el descuento del 5% al resultado.
- Finalmente mostramos la direccion, pisos recorridos y resultado.*/

void main(){

    /*Constantes del ejercicio*/

    const int PISO_MIN = 0, CAPACIDAD_MAX = 8;
    const float DESCUENTO = 0.05;
    const char *direccion;

    /*Datos de entrada*/

    int ps_act = 0, ps_dstn = 0, ps_recd = 0, num_pisos = 0;
    int capacidad = 0, dstn_val = 0, capacidad_val = 0;
    float resultado = 0;
    
    /*Leer datos de entrada*/
    
    printf ("Ingrese el piso donde se encuentra:\n ");
    scanf ("%d", &ps_act);
    printf ("Ingrese el piso de destino:\n ");
    scanf ("%d", &ps_dstn);
    printf("Ingrese la cantidad de pisos del edificio:\n ");
    scanf ("%d",&num_pisos);
    printf ("Ingrese la capacidad de personas (MAX 8):\n ");
    scanf ("%d", &capacidad);

    /*Condionales del ejercicio*/

    dstn_val = (ps_dstn >= PISO_MIN && ps_dstn <= num_pisos);
    capacidad_val = (capacidad <= CAPACIDAD_MAX);

    if (dstn_val && capacidad_val) {

        /*Procesos y calculos*/

        ps_recd = abs (ps_dstn - ps_act);
        if (ps_dstn > ps_act) {
        direccion = "SUBE";
        } else if (ps_dstn < ps_act) {
            direccion = "BAJA";
        } else {
            direccion = "SIN MOVIMIENTO";
        }

    resultado = ps_recd - (ps_recd * DESCUENTO);

    /*Resultados*/

    printf ("Los pisos recorridos fueron: %d\n", ps_recd);
    printf ("Su direccion fue: %s\n", direccion);
    printf ("Con el 5%% de descuento es: %.2f\n", resultado);
} else {
    printf ("EL piso seleccionado es INCORRECTO o EXCEDE la capacidad\n");
}
}