#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.
#include <math.h> // Incluye la biblioteca para funciones matemáticas.

/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de una expresión determinada.
T, P y N: variables de tipo entero. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int T, P, N; // Variables para almacenar los valores de T, P y N.

    printf("Ingrese los valores de T, P y N: "); // Solicita al usuario que ingrese los valores de T, P y N.
    scanf("%d %d %d", &T, &P, &N); // Lee los valores ingresados por el usuario y los almacena en las variables T, P y N.

    if (P != 0) // Comprueba si P es diferente de cero.
    { // Inicia el bloque if.

        if (pow(T / P, N) == (pow(T, N) / pow(P, N))) // Comprueba si la expresión es igual.
            printf("\nSe comprueba la igualdad"); // Si la expresión es igual, imprime un mensaje indicando que se comprueba la igualdad.
        else
            printf("\nNo se comprueba la igualdad"); // Si la expresión no es igual, imprime un mensaje indicando que no se comprueba la igualdad.

    } // Termina el bloque if.
    else
        printf("\nP tiene que ser diferente de cero"); // Si P es cero, imprime un mensaje indicando que P debe ser diferente de cero.

} // Termina el bloque de la función main.
