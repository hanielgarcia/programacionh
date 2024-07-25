#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[50];
    int matricula;
    float promedio;
} estudiante;

int main(void) {
    int opcion;
    estudiante *est = NULL;

do {
printf("menu\n");
printf("salir:0\t");
printf("leer disco:1\t");
printf("nuevo:2\n");

printf("Elige una opcion: ");
scanf("%i", &opcion);

switch (opcion) {
case 0:
printf("Salir\n");
break;
case 1:
if (est == NULL) {
printf("No hay datos guardados.\n");
} else {
printf("\nDatos del estudiante:\n");
printf("Nombre: %s\n", est->nombre);
printf("Matricula: %d\n", est->matricula);
printf("Promedio: %.2f\n", est->promedio);
}
break;
case 2:

est = (estudiante *)malloc(sizeof(estudiante));
if (est == NULL) {
printf("Error al asignar memoria.\n");
return 1;
}
printf("Ingrese nombre del estudiante: ");
scanf("%s", &est->nombre);

printf("Ingrese matricula del estudiante: ");
scanf("%d", &est->matricula);

printf("Ingrese promedio del estudiante: ");
scanf("%f", &est->promedio);
break;
default:
printf("Opcion no valida.\n");
break;
}
} while (opcion != 0);

if (est != NULL) {
        free(est);
    }

    return 0;
}

