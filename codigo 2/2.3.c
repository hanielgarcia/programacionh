#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si éste es inferior a $1,500.
PRE y NPR: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float PRE, NPR; // Declara dos variables de tipo float para almacenar el precio original y el nuevo precio.

    printf("ingrese el precio del producto: "); // Muestra un mensaje pidiendo al usuario que ingrese el precio del producto.
    scanf("%f", &PRE); // Lee el precio ingresado por el usuario y lo almacena en la variable PRE.

    if (PRE < 1500) // Verifica si el precio ingresado es menor que $1,500.
    { // Inicia el bloque if.

        NPR = PRE * 1.11; // Calcula el nuevo precio incrementando el precio original en un 11%.
        printf("\nNuevo precio: %7.2f", NPR); // Imprime el nuevo precio con un formato específico.

    } // Termina el bloque if.

} // Termina el bloque de la función main.
