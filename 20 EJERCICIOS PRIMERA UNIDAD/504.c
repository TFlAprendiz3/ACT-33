#include <stdio.h>

/* PASOS A SEGUIR
- Definir las constantes simbolicas PI, FACTOR y DIVISOR.
- Leer el radio y el angulo de la circunferencia.
- Calcular el area del sector con la formula ((PI * radio * radio * angulo) / FACTOR).
- Evaluar la expresion logica (radio > 0 AND angulo > 0).
- Dividir el area entre la constante simbolica DIVISOR y mostrar el resultado. */

void main(){

    /*Constantes del ejercicio*/

    const float PI = 3.14159, FACTOR = 360.0, DIVISOR = 2.0;

    /*Datos de entrada*/

    float radio = 0.0, angulo = 0.0, area_sector = 0.0, resultado = 0.0, sec_valido = 0.0;

    /*Lectura de datos ingresados*/

    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    printf("Ingrese el angulo en grados: ");
    scanf("%f", &angulo);

    /*Procesos y calculos*/

    area_sector = ((PI * radio * radio * angulo) / FACTOR);
    sec_valido = (radio > 0 && angulo > 0);
    resultado = area_sector / DIVISOR;

    /*Condicional*/

    if (sec_valido){

    /*Resultados*/

    printf("Area del sector: %.2f\n", area_sector);
    printf("Area dividida entre DIVISOR: %.2f\n", resultado);

    } else {
        printf ("El radio o el angulo son MENORES a 0\n");
    }
}