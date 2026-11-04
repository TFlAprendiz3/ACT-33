#include <stdio.h>
#include <math.h>
void main(){

/*Constantes del ejercicio*/
float TASA_CAMBIO = 0.27;

/*Datos de entrada*/
float soles;
float dolares;
float dolares_total;

/*Leer datos de entrada*/
printf ("Ingrese los soles:\n");
scanf ("%f", &soles);

/*Procesos y calculos*/
dolares_total = (soles * TASA_CAMBIO);

/*Resultados*/
printf ("%.0f soles equivalen a: %.2f dolares estadounidenses", soles, dolares_total);
}
