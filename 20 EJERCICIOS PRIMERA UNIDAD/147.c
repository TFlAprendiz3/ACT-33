#include <stdio.h>
#include <math.h>

/*Datos de entrada*/

int main(){
    float num_real = 0.0, potencia = 0.0, promedio = 0.0, diferencia = 0.0;

    /*Constante del ejercicio*/
    
    const int exp = 2;

/*Lectura de datos ingresados*/

printf ("Ingrese el valor del producto o servicio:\n ");
scanf ("%f", &num_real);

/*Evaluar condicion*/

if (num_real >= 0) {

/*Procesos y calculos*/

potencia = pow (num_real, exp);
promedio = (num_real + potencia) / 2.0;
diferencia = (potencia - promedio);

/*Resultados*/

printf ("Los valores utilizados son: Valor ingresado es %.2f, Exponente %d, Cuadrado es %.2f, Promedio es %.2f, Diferencia es %.2f\n ", num_real , exp , potencia , promedio , diferencia);
printf ("El cuadrado del valor ingresado es: %.2f\n ", potencia);
printf ("La diferencia entre el resultado y el promedio es: %.2f\n ", diferencia);

} else {
    printf ("El valor ingresado es INCORRECTO");
}

return 0;

}