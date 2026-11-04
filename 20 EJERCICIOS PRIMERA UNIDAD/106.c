#include <stdio.h>

void main(){
    /* PROPÓSITO DEL ALGORITMO:
    Este programa permite convertir un peso expresado en onzas 
    a su equivalente en gramos con una expresió aritmética.
    Además, verificar que el resultado sea valido (mayor a cero) y calcular la mitad 
    del peso total obtenido en gramos.*/

    /*Constantes del ejercicio*/
    float ONZA_GRAMO = 28.3495;
    int DIVISOR = 2;

    /*Datos de entrada*/
    float onzas = 0.0;
    float gramos = 0.0;
    float mitad_gramos = 0.0;

    /*Leer datos de entrada*/
    printf("Ingrese el peso en onzas:\n");
    scanf("%f", &onzas);

    gramos = onzas * ONZA_GRAMO;

    /*Condionales del ejercicio*/
    if(gramos > 0){
        /*Procesos y calculos*/
        mitad_gramos = gramos / DIVISOR;
        /*Resultados*/
        printf("%.2f onzas equivalen a %.2f gramos\n", onzas, gramos);
        printf("La mitad de los gramos es de: %.2f gramos\n", mitad_gramos);
    } else {
        printf("Ha ingresado un dato no valido, ingrese un dato mayor a 0.\n");
    }
} 
