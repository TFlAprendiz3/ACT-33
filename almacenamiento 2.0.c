#include <stdio.h>

/*Datos de Entrada*/

void main(){
    int arch_doc = 0, arch_img = 0, arch_vid = 0, arch_prog = 0;
    float tam_doc = 0.0, tam_img = 0.0, tam_vid = 0.0, tam_prog = 0.0;
    float espacio_doc = 0.0, espacio_img = 0.0, espacio_vid = 0.0, espacio_prog = 0.0;
    float GB_usados;
    float espacio_sobra = 0.0;
    int capacidad_disco = 0; 
    float espacio_total = 0.0;
    float porcentaje = 0.0;

/*Lectura e ingreso de datos*/

printf ("Ingrese la cantidad de documentos y su tamano total en MB: ");
scanf ("%d %f", &arch_doc, &tam_doc);
printf ("Ingrese la cantidad de imagenes y su tamano total en MB: ");
scanf ("%d %f", &arch_img, &tam_img);
printf ("Ingrese la cantidad de videos y su tamano total en MB: ");
scanf ("%d %f", &arch_vid, &tam_vid);
printf ("Ingrese la cantidad de programas y su tamano total en MB: ");
scanf ("%d %f", &arch_prog, &tam_prog);
printf ("Ingrese la capacidad de su disco en GB: ");
scanf ("%d", &capacidad_disco);

/*Procesos y calculos*/

espacio_doc = (arch_doc * tam_doc);
espacio_img = (arch_img * tam_img);
espacio_vid = (arch_vid * tam_vid);
espacio_prog = (arch_prog * tam_prog);

espacio_total = (espacio_doc + espacio_img + espacio_vid + espacio_prog);
GB_usados = (espacio_total / 1024.0);
espacio_sobra = (capacidad_disco - GB_usados);
porcentaje = ((GB_usados / capacidad_disco) * 100);

/*Resultados*/

printf ("El almacenamiento ocupado es %f \n ", GB_usados);
printf ("El porcentaje de uso es %f %% \n ", porcentaje );
printf ("El almacenamiento sobrante es %f ", espacio_sobra);

}

