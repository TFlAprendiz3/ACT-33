#include <stdio.h>

int main() {
    //Variables
    int edad, fcm = 0;
    float zona_entrenamiento, suma = 0.0;
    float factor_zona = 0.7;
    
    //Ingreso de datos
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    
    //Fórmulas respecto a las edades
    fcm = 220 - edad;
    zona_entrenamiento = fcm * factor_zona;
    printf("Su FCM es: %d \n", fcm);
    printf("su zona de entrenamiento es: %f \n", zona_entrenamiento);

    suma = fcm + zona_entrenamiento;
    printf("La suma acumulada es; %.2f \n", suma);
}
