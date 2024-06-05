#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al mismo 11% si es menor a $1500 y 8% en caso contrario (mayor o igual).
PRE y NPR: variables de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float PRE, NPR; // Variables para almacenar el precio original (PRE) y el nuevo precio (NPR) del producto.

    printf("Ingrese el precio del producto: "); // Solicita al usuario que ingrese el precio del producto.
    scanf("%f", &PRE); // Lee el precio ingresado por el usuario y lo almacena en la variable PRE.

    if (PRE < 1500) // Verifica si el precio es menor a $1500.
        NPR = PRE * 1.11; // Si el precio es menor a $1500, incrementa el precio en un 11%.
    else // Si el precio es mayor o igual a $1500.
        NPR = PRE * 1.08; // Incrementa el precio en un 8%.

    printf("\nNuevo precio del producto: %8.2f", NPR); // Imprime el nuevo precio del producto con formato.

} // Termina el bloque de la función main.
