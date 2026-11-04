#include <stdio.h>
#include <math.h>
void main (){

/*Constantes del ejercicio*/
float PI = 3.14159;
float FACTOR = 360;

/*Datos de entrada*/
float angulo;
float area_sector;
float radio;
float cuadrado_sector;

/*Leer datos de entrada*/
printf ("Ingrese el radio:\n" );
scanf ("%f", &radio);

printf ("Ingrese el angulo:\n" );
scanf ("%f", &angulo);

/*Procesos y calculos*/
area_sector = (PI * radio * radio * angulo)/FACTOR;
cuadrado_sector = pow(area_sector,2);

/*Resultados*/
printf ("El area del sector es: %.2f \n", area_sector);
printf ("El cuadrado del area del sector es: %.2f \n", cuadrado_sector);
}
