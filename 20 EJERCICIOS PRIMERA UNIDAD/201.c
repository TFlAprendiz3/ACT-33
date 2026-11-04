#include <stdio.h>
void main (){

    /*Datos de entrada*/
    int LARGO;
    int ANCHO;
    int ALTO;
    int volumen;
    float volumen_bono;

    /*Leer datos de entrada*/
    printf ("Ingrese el LARGO:\n");
    scanf ("%d", &LARGO);
    printf ("Ingrese el ANCHO:\n");
    scanf ("%d", &ANCHO);
    printf ("Ingrese el ALTO:\n");
    scanf ("%d", &ALTO);

    /*Procesos y calculos*/
    volumen = (LARGO * ANCHO * ALTO);
    volumen_bono = volumen * 1.5;

    /*Condionales del ejercicio*/
    if(LARGO > 0 && ANCHO > 0 && ALTO > 0){   
    printf ("Medidas validas:\n");
    } else {
    printf (" Medidas no validas:\n");
    }

    /*Resultados*/
    printf ("El volumen del prisma es: %d centimetros cubicos\n", volumen );
    printf ("Y el volumen bono es: %f centimetros cubicos \n", volumen_bono);
}