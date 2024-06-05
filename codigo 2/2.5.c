#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.
#include <math.h> // Incluye la biblioteca para funciones matemáticas.

/* Función matemática.
El programa obtiene el resultado de una función.
OP y T: variables de tipo entero.
RES: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int OP, T; // Variables para almacenar la opción de cálculo y el valor entero.
    float RES; // Variable para almacenar el resultado de la función.

    printf("Ingrese la opción del cálculo y el valor entero: "); // Solicita al usuario que ingrese la opción de cálculo y el valor entero.
    scanf("%d %d", &OP, &T); // Lee la opción de cálculo y el valor entero ingresados por el usuario.

    switch(OP) // Inicia la estructura switch basada en la opción de cálculo.
    { // Inicia el bloque switch.

        case 1: // Caso 1: calcula T dividido por 5.
            RES = T / 5;
            break;

        case 2: // Caso 2: calcula T elevado a T.
            RES = pow(T, T); // La función pow está definida en la biblioteca math.h.
            break;

        case 3:
        case 4: // Caso 3 y 4: calcula 6 multiplicado por T dividido por 2.
            RES = 6 * T / 2;
            break;

        default: // En caso de que la opción de cálculo no sea válida, asigna 1 a RES.
            RES = 1;
            break;

    } // Termina el bloque switch.

    printf("\nResultado: %7.2f", RES); // Imprime el resultado de la función con formato.

} // Termina el bloque de la función main.
