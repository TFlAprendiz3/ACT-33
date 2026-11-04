#include <stdio.h>

void main (){

    /*Constantes del ejercicio*/
    float DESCUENTO = 0.05;

    /*Datos de entrada*/
    float diagonal_mayor = 0.0;
    float diagonal_menor =0.0;
    float area = 0.0;
    float area_desc = 0.0;

    /*Leer datos de entrada*/
    printf("Ingrese la diagonal mayor en metros:\n");
    scanf("%f", &diagonal_mayor);

    printf("Ingrese la diagonal menor en metros:\n");
    scanf("%f", &diagonal_menor);

    /*Condionales del ejercicio*/
    if(diagonal_mayor > 0 && diagonal_menor > 0){

        /*Procesos y calculos*/
        area = ((diagonal_mayor * diagonal_menor) / 2);
        area_desc = (area - (area * DESCUENTO));

        /*Resultados*/
        printf("El area del rombo es: %.2f m^2\n", area);
        printf("El area con descuento es: %.2f m^2\n", area_desc);   

    }else {

        printf("Ingrese datos mayores a 0");
    }
}


