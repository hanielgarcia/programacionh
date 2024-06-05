#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.
#include <math.h> // Incluye la biblioteca para funciones matemáticas.

/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float RES; // Variable para almacenar el resultado de la expresión.
    int R, T, Q; // Variables para almacenar los valores de R, T y Q.

    printf("Ingrese los valores de R, T y Q: "); // Solicita al usuario que ingrese los valores de R, T y Q.
    scanf("%d %d %d", &R, &T, &Q); // Lee los valores ingresados por el usuario y los almacena en las variables R, T y Q.

    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2); // Calcula el resultado de la expresión.

    if (RES < 820) // Comprueba si el resultado de la expresión es menor que 820.
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q); // Si es así, imprime los valores de R, T y Q.

} // Termina el bloque de la función main.

