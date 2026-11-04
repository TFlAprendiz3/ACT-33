#include <stdio.h>

void main(){

     /*Constantes del ejercicio*/
    int CONST_SIMBOLCA = 3;

    /*Datos de entrada*/
    float nota_1 = 0.0;
    float nota_2 = 0.0;
    float nota_3 = 0.0;
    float suma_total = 0.0;
    float menor = 0.0; 
    float promedio = 0.0;
    float prom_simbolico = 0.0;

    /*Leer datos de entrada*/
    printf("Ingrese la primera nota:\n");
    scanf("%f", &nota_1);

    printf("Ingrese la segunda nota:\n");
    scanf("%f", &nota_2);

    printf("Ingrese la tercera nota:\n");
    scanf("%f", &nota_3);

    /*Condionales del ejercicio*/
    if(nota_1 <= nota_2 && nota_1 <= nota_3){
        menor = nota_1;               
    } else if(nota_2 <= nota_1 && nota_2 <= nota_3){
        menor = nota_2;
    } else{
        menor = nota_3;
    }   

    /*Procesos y calculos*/
    suma_total = nota_1 + nota_2 + nota_3;
    promedio = (suma_total - menor) / 2;
    prom_simbolico = promedio / CONST_SIMBOLCA;

    /*Resultados*/
    printf("El promedio final del estudiante es: %.2f\n", promedio);
    printf("El promedio simbolico del estudiante es: %.2f\n", prom_simbolico);

}
