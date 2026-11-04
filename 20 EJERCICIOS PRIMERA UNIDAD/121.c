#include <stdio.h>
#include <stdbool.h>

int main() {
    //Variables
    int c = 0;     //c = entero
    bool es_divisible = 0;
    float mitad_resul = 0.0;
    
    //Ingreso de datos
    printf("Ingrese un numero entero: \n");
    scanf("%d", &c);

    /*Proceso donde se verifica que el numero entero sea divisible para 3 y 5 
    posterior se divide para sacar la mitad del numero dado en el principio*/
    es_divisible = (c % 3 == 0) && (c % 5 == 0);
    
    if (es_divisible) {
        printf("El numero %d Es divisible por 3 y por 5.\n", c);
    } else {
        printf("El numero %d No es divisible por 3 ni 5.\n", c);
    }
    mitad_resul =  c / 2.0;
    
    //Resultados
    printf("La mitad del resultado del numero entero (%d) es: %.2f\n", es_divisible || c, mitad_resul);

}
