#include <stdio.h>
#include <math.h>

int main() {
    // Declaración de variables 
    float num1, num2 = 0.0;     //numeros reales
    float promedio, resultado = 0.0;

    printf("Este algoritmo calcula el promedio de dos numeros\n");
    printf("reales y muestra dicho promedio elevado a la 4ta potencia.\n");

    // Lectura de datos
    printf("Ingrese un numero real:\n");
    scanf("%f", &num1);
    printf("Ingrese otro numero real:\n");
    scanf("%f", &num2);

    // Condición que debe cumplir el promedio
    promedio = ((num1 + num2) / 2);
    resultado = pow(promedio, 4);
if (promedio > 0){
    printf("El promedio entre los dos numeros ingresados es:%2.f\n", promedio);
    printf("El promedio elevado a la 4ta potencia es:%2.f\n", resultado);
} else {
        printf("El promedio es menor a 0");
    }
}
