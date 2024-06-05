#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en cuenta la distancia entre las dos ciudades y el tiempo de permanencia del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int DIS, TIE; // Variables para almacenar la distancia entre ciudades y el tiempo de estancia del pasajero.
    float BIL; // Variable para almacenar el costo del billete.

    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); // Solicita al usuario que ingrese la distancia entre ciudades y el tiempo de estancia.
    scanf("%d %d", &DIS, &TIE); // Lee la distancia y el tiempo ingresados por el usuario y los almacena en las variables DIS y TIE.

    if ((DIS * 2 > 500) && (TIE > 10)) // Verifica si la distancia total del viaje es mayor a 500 km y si el tiempo de estancia es mayor a 10 horas.
        BIL = DIS * 2 * 0.19 * 0.8; // Si se cumple la condición, calcula el costo del billete con un descuento del 20%.
    else
        BIL = DIS * 2 * 0.19; // Si no se cumple la condición, calcula el costo del billete sin descuento.

    printf("\n\nCosto del billete: %7.2f", BIL); // Imprime el costo del billete con formato.

} // Termina el bloque de la función main.
