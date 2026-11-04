#include <stdio.h>

/*Datos de Entrada*/

void main(){

    /*Constantes del ejercicio*/

    const float Precio_B = 7.99, Precio_E = 11.99, Precio_P = 15.99;
    const float Costo_perf_extra = 2.0;
    const int perf_includ = 2;

    /*Datos de Entrada*/

    int num_serv = 0, cant_perf = 0;
    char plan_serv, calidad;
    float precio_base = 0.0, total_perf_extra = 0.0, mensualidad = 0.0, costo_total = 0.0;

    /*Lectura de datos ingresados*/

    printf ("Ingrese el numero de servicios:\n ");
    scanf ("%d", &num_serv);
    printf ("Ingrese plan ('B' basico, 'E' estandar, 'P' premium):\n ");
    scanf (" %c", &plan_serv);
    printf ("Ingrese la cantidad de perfiles:\n ");
    scanf ("%d", &cant_perf);
    printf ("Ingrese la calidad que desee ('S' sd, 'H' hd, '4' 4K):\n ");
    scanf (" %c", &calidad);

    /*Evaluar condicion*/

    if (plan_serv == 'B' || plan_serv == 'b'){
        precio_base = Precio_B;
    } else if (plan_serv == 'E' || plan_serv == 'e'){
        precio_base = Precio_E;
    } else if (plan_serv == 'P' || plan_serv == 'p'){
        precio_base = Precio_P;
    } else {
        printf ("EL PLAN INGRESADO NO ES VALIDO.\n");
    }

    if (cant_perf > perf_includ){
        total_perf_extra = (cant_perf - perf_includ) * Costo_perf_extra;
    } else {
        total_perf_extra = 0.0;
    }

    /*Procesos y calculos*/

    mensualidad = (precio_base + total_perf_extra) * num_serv;
    costo_total = mensualidad * 0.95;

    /*Resultados*/

    printf ("----------------------------------\n");
    printf ("El plan seleccionado fue: %c\n ", plan_serv);
    printf ("La calidad elegida fue: %c\n ", calidad);
    printf ("El costo mensual es:%.2f\n ", mensualidad);
    printf ("Con el descuento de 5%%, el costo es:%.2f\n ", costo_total);

}