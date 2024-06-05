#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.
#include <math.h> // Incluye la biblioteca para funciones matemáticas.

/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de una función.
Y: variable de tipo entero.
X: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float X; // Variable para almacenar el resultado de la función.
    int Y; // Variable para almacenar el valor de Y.

    printf("Ingrese el valor de Y: "); // Solicita al usuario que ingrese el valor de Y.
    scanf("%d", &Y); // Lee el valor de Y ingresado por el usuario y lo almacena en la variable Y.

    if (Y < 0 || Y > 50) // Verifica si Y está fuera del rango [0, 50].
        X = 0; // Si Y está fuera del rango, asigna 0 a X.
    else if (Y <= 10) // Si Y está en el rango [0, 10].
        X = 4.0 / Y - Y; // Calcula el valor de X según la primera condición.
    else if (Y <= 25) // Si Y está en el rango (10, 25].
        X = pow(Y, 3) - 12; // Calcula el valor de X según la segunda condición.
    else // Si Y está en el rango (25, 50].
        X = pow(Y, 2) + pow(Y, 3) - 18; // Calcula el valor de X según la tercera condición.

    printf("\n\nY = %d\tX = %8.2f", Y, X); // Imprime el valor de Y y el resultado de la función con formato.

} // Termina el bloque de la función main.
