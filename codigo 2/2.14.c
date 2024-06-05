#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Teléfono.
El programa, al recibir como datos la clave de la zona geográfica y el número de segundos de una llamada telefónica, calcula el costo de la misma.
CLA y TIE: variables de tipo entero.
COS: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int CLA, TIE; // Variables para almacenar la clave de la zona geográfica y el tiempo de la llamada.
    float COS; // Variable para almacenar el costo de la llamada.

    printf("Ingresa la clave y el tiempo: "); // Solicita al usuario que ingrese la clave y el tiempo de la llamada.
    scanf("%d %d", &CLA, &TIE); // Lee la clave y el tiempo ingresados por el usuario y los almacena en las variables CLA y TIE.

    switch (CLA) // Inicia la estructura switch basada en la clave de la zona geográfica.
    { // Inicia el bloque switch.

        case 1: COS = TIE * 0.13 / 60; break; // Si la clave es 1, calcula el costo de la llamada según la tarifa y el tiempo.
        case 2: COS = TIE * 0.11 / 60; break; // Si la clave es 2, calcula el costo de la llamada según la tarifa y el tiempo.
        case 5: COS = TIE * 0.22 / 60; break; // Si la clave es 5, calcula el costo de la llamada según la tarifa y el tiempo.
        case 6: COS = TIE * 0.19 / 60; break; // Si la clave es 6, calcula el costo de la llamada según la tarifa y el tiempo.
        case 7:
        case 9: COS = TIE * 0.17 / 60; break; // Si la clave es 7 o 9, calcula el costo de la llamada según la tarifa y el tiempo.
        case 10: COS = TIE * 0.20 / 60; break; // Si la clave es 10, calcula el costo de la llamada según la tarifa y el tiempo.
        case 15: COS = TIE * 0.39 / 60; break; // Si la clave es 15, calcula el costo de la llamada según la tarifa y el tiempo.
        case 20: COS = TIE * 0.28 / 60; break; // Si la clave es 20, calcula el costo de la llamada según la tarifa y el tiempo.
        default: COS = -1; break; // Si la clave no coincide con ninguna de las anteriores, establece un valor de costo inválido.

    } // Termina el bloque switch.

    if (COS != -1) // Comprueba si el costo es válido.
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS); // Si el costo es válido, imprime la clave, el tiempo y el costo.
    else
        printf("\nError en la clave"); // Si el costo es inválido, imprime un mensaje de error.

} // Termina el bloque de la función main.
