#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el número de días de internación de un cliente en un spa, calcula el costo total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int TRA, EDA, DIA; // Variables para almacenar el tipo de tratamiento, la edad y el número de días de internación.
    float COS; // Variable para almacenar el costo total del tratamiento.

    printf("Ingrese tipo de tratamiento, edad y días: "); // Solicita al usuario que ingrese el tipo de tratamiento, la edad y el número de días.
    scanf("%d %d %d", &TRA, &EDA, &DIA); // Lee los valores ingresados por el usuario y los almacena en las variables TRA, EDA y DIA.

    switch (TRA) // Inicia la estructura switch basada en el tipo de tratamiento.
    { // Inicia el bloque switch.

        case 1: COS = DIA * 2800; break; // Si el tipo de tratamiento es 1, calcula el costo total del tratamiento según el número de días.
        case 2: COS = DIA * 1950; break; // Si el tipo de tratamiento es 2, calcula el costo total del tratamiento según el número de días.
        case 3: COS = DIA * 2500; break; // Si el tipo de tratamiento es 3, calcula el costo total del tratamiento según el número de días.
        case 4: COS = DIA * 1150; break; // Si el tipo de tratamiento es 4, calcula el costo total del tratamiento según el número de días.
        default: COS = -1; break; // Si el tipo de tratamiento no coincide con ninguna de las anteriores, establece un valor de costo inválido.

    } // Termina el bloque switch.

    if (COS != -1) // Comprueba si el costo es válido.
    { // Inicia el bloque if.

        if (EDA >= 60) // Si la edad es mayor o igual a 60 años.
            COS = COS * 0.75; // Aplica un descuento del 25% al costo total del tratamiento.
        else if (EDA <= 25) // Si la edad es menor o igual a 25 años.
            COS = COS * 0.85; // Aplica un descuento del 15% al costo total del tratamiento.

        printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %8.2f", TRA, DIA, COS); // Imprime la clave del tratamiento, el número de días y el costo total del tratamiento.

    } // Termina el bloque if.
    else
        printf("\nLa clave del tratamiento es incorrecta"); // Si el costo es inválido, imprime un mensaje de error.

} // Termina el bloque de la función main.
