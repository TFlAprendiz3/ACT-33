#include <stdio.h>

/*DESCRIPCION

- Leer peso, pais destino, tipo de envio y valor declarado.
- Validar que el tipo de envio sea E, R o P.
- Seleccionar el factor segun el tipo de envio.
- Calculamos el costo de envio con la tarifa base, el costo por kg y el factor.
- Calculamos el seguro sobre el valor declarado.
- Se suma el costo de envio y seguro para obtener el subtotal.
- Restamos el descuento del 5% al subtotal.
- Finalmente mostramos el desglose completo.*/

void main(){

    /*Constantes del ejercicio*/

    const float TARIFA_BASE = 10.0, COSTO_KG = 5.0; 
    const float FACTOR_ESTANDAR = 1.0, FACTOR_RAPIDO = 1.5, FACTOR_PRIORITARIO = 2.5;
    const float SEGURO_PORCENTAJE = 0.02, DESCUENTO = 0.05;

    /*Datos de entrada*/

    float factor = 0.0, peso_kg = 0.0, val_declarado = 0.0, costo_envio = 0.0;
    float seguro = 0.0, descuento = 0.0, subtotal = 0.0, total = 0.0;
    float estandar = 0.0, rapido = 0.0, prioritario = 0.0, tipo_val = 0.0;
    char pais_destino [50];
    char tipo_envio;

    /*Lectura de datos ingresados*/

    printf ("Ingrese el peso (kg) del paquete: \n");
    scanf ("%f", &peso_kg);
    printf ("Ingrese el pais de destino: \n");
    scanf (" %49[^\n]", pais_destino);
    printf ("Ingrese el tipo de envio (E = estandar, R = rapido, P = prioritario):\n");
    scanf (" %c", &tipo_envio);
    printf ("Ingrese el valor declarado: \n");
    scanf ("%f", &val_declarado);

    estandar = (tipo_envio == 'E' || tipo_envio == 'e');
    rapido = (tipo_envio == 'R' || tipo_envio == 'r');
    prioritario = (tipo_envio == 'P' || tipo_envio == 'p');
    tipo_val = (estandar || rapido || prioritario);

    /*Condicionales del ejercicio*/

    if (tipo_val) {
        if (estandar) {
            factor = FACTOR_ESTANDAR;
        } else if (rapido) {
            factor = FACTOR_RAPIDO;
        } else {
            factor = FACTOR_PRIORITARIO;
        }

        /*Procesos y calculos*/
        
        costo_envio = (TARIFA_BASE + peso_kg * COSTO_KG) * factor;
        seguro = val_declarado * SEGURO_PORCENTAJE;
        subtotal = costo_envio + seguro;
        descuento = subtotal * DESCUENTO;
        total = subtotal - descuento;

        /*Resultados*/

        printf ("=========================================\n");
        printf ("El pais de destino es: %s\n", pais_destino);
        printf ("El costo de envio es: %.2f\n", costo_envio);
        printf ("El valor del seguro es: %.2f\n", seguro);
        printf ("El subototal es: %.2f\n", subtotal);
        printf ("El descuento aplicado del 5%% es: %.2f\n", descuento);
        printf ("El precio total a pagar: %.2f\n", total);
        printf ("=========================================\n");

    } else {
        printf ("=========================================\n");
        printf ("El tipo de envio es INCORRECTO (use E, R o P)\n");
        printf ("=========================================\n");
    }

}