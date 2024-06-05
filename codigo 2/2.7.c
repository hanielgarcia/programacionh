#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.
P, S y R: variables de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float P, S, R; // Variables para almacenar las ventas de los tres vendedores.

    printf("\nIngrese las ventas de los tres vendedores: "); // Solicita al usuario que ingrese las ventas de los tres vendedores.
    scanf("%f %f %f", &P, &S, &R); // Lee las ventas ingresadas por el usuario y las almacena en las variables P, S y R.

    if (P > S) // Compara las ventas de P y S.
        if (P > R) // Si P es mayor que S y R.
            if (S > R) // Si S es mayor que R.
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R); // Imprime el orden P, S y R.
            else
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S); // Imprime el orden P, R y S.
        else
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S); // Imprime el orden R, P y S.
    else
        if (S > R) // Compara las ventas de S y R.
            if (P > R) // Si P es mayor que R.
                printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R); // Imprime el orden S, P y R.
            else
                printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P); // Imprime el orden S, R y P.
        else
            printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P); // Imprime el orden R, S y P.

} // Termina el bloque de la función main.
