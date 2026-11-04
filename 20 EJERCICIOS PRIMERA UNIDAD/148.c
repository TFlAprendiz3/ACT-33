#include <stdio.h>

/*Datos de entrada*/

int main(){
    const int divisor = 3;
    float nota_1 = 0, nota_2 = 0, nota_3 = 0, nota_4 = 0, nota_5 = 0;
    float porcentaje = 0.0, promedio = 0.0, suma = 0.0, mayor = 0.0, menor = 0.0;
    int referencia = 0;

/*Lectura de datos*/

printf ("Ingrese la nota 1:\n ");
scanf ("%f", &nota_1);
printf ("Ingrese la nota 2:\n ");
scanf ("%f", &nota_2);
printf ("Ingrese la nota 3:\n ");
scanf ("%f", &nota_3);
printf ("Ingrese la nota 4:\n ");
scanf ("%f", &nota_4);
printf ("Ingrese la nota 5:\n ");
scanf ("%f", &nota_5);

/*Valor de referencia*/

printf ("Ingrese la referencia de calificacion:\n ");
scanf ("%d", &referencia);

/*Procesos y calculos*/

suma = (nota_1 + nota_2 + nota_3 + nota_4 + nota_5);
mayor = nota_1;
menor = nota_1;

/*Evaluamos todas las notas*/

if (nota_2 > mayor) {
    mayor = nota_2;
}
if (nota_2 < menor) {
    menor = nota_2;
}
if (nota_3 > mayor) {
    mayor = nota_3;
}
if (nota_3 < menor) {
    menor = nota_3;
}
if (nota_4 > mayor) {
    mayor = nota_4;
}
if (nota_4 < menor) {
    menor = nota_4;
}
if (nota_5 > mayor) {
    mayor = nota_5;
}
if (nota_5 < menor) {
    menor = nota_5;
}

promedio = ((suma - mayor - menor) / 3);

if (referencia <= 0){
porcentaje = 0.0;
printf ("El valor de referencia es INCORRECTO\n");
} else {
porcentaje = ((promedio / referencia) * 100);
}

/*Resultados*/

printf ("El promedio de las notas es: %.2f\n ", promedio);
printf ("El porcentaje respecto al valor de referencia es: %.2f%%\n ", porcentaje);

return 0;

}