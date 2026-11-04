#include <stdio.h>
#include <math.h>

int main() {
    //Variables
    float num1, num2 = 0.0;
    float raiz_cuadrada, descuento = 0.0;
    float media_geometrica = 0.0;

    //Ingreso de datos
    printf("Ingrese un numero positivo: \n");
    scanf("%f", &num1);
    printf("Ingrese otro numero positivo: \n");
    scanf("%f", &num2);

    //Condicional del numero ingresado
    if ((num1 > 0) && (num2 > 0)) {
    
    raiz_cuadrada = sqrt(num1 * num2);
    media_geometrica = raiz_cuadrada;
    descuento = media_geometrica * 0.05;    
    printf("La media geometrica es: %2.f \n", media_geometrica);
    printf("La media geometrica con 5%% de descuento es: %f \n", media_geometrica - descuento);
    } else {
    printf("ERROR POR FAVOR INGRESE DE NUEVO LOS VALORES \n");
    }
}
