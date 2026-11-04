#include <stdio.h>
#include <math.h>
void main (){

    /*Datos de entrada*/
    int Z;
    int S;
    int VAL1;
    float promedio;
    float promedio_cubo;

    /*Leer datos de entrada*/
    printf ("Ingrese S:\n");
    scanf ("%d", &S);
    printf ("Ingrese Z:.\n");
    scanf ("%d", &Z);
    printf ("Ingrese VAL1:.\n");
    scanf ("%d", &VAL1);

    /*Procesos y calculos*/
    promedio = ((Z + S + VAL1)/3);
    promedio_cubo = pow(promedio,3);
    promedio > 0;

    /*Resultados*/
    printf ("El promedio es: %.0f\n", promedio);
    printf ("El promedio elevado al cubo es: %.0f\n", promedio_cubo);
}
