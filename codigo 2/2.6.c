#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su salario en función de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    float SAL; // Variable para almacenar el salario del profesor.
    int NIV; // Variable para almacenar el nivel académico del profesor.

    printf("Ingrese el nivel académico del profesor: "); // Solicita al usuario que ingrese el nivel académico del profesor.
    scanf("%d", &NIV); // Lee el nivel académico ingresado por el usuario y lo almacena en la variable NIV.

    printf("Ingrese el salario: "); // Solicita al usuario que ingrese el salario del profesor.
    scanf("%f", &SAL); // Lee el salario ingresado por el usuario y lo almacena en la variable SAL.

    switch(NIV) // Inicia la estructura switch basada en el nivel académico del profesor.
    { // Inicia el bloque switch.

        case 1: // Caso 1: incrementa el salario en un 0.35%.
            SAL = SAL * 1.0035;
            break;

        case 2: // Caso 2: incrementa el salario en un 0.41%.
            SAL = SAL * 1.0041;
            break;

        case 3: // Caso 3: incrementa el salario en un 0.48%.
            SAL = SAL * 1.0048;
            break;

        case 4: // Caso 4: incrementa el salario en un 0.53%.
            SAL = SAL * 1.0053;
            break;

    } // Termina el bloque switch.

    printf("\n\nNivel: %d \tNuevo salario: %8.2f", NIV, SAL); // Imprime el nivel y el nuevo salario con formato.

} // Termina el bloque de la función main.
