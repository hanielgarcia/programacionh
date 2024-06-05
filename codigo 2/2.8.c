#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Asistentes.
El programa, al recibir como datos la matrícula, la carrera, el semestre
y el promedio de un alumno de una universidad privada, determina si
éste puede ser asistente de su carrera.
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int MAT, CAR, SEM; // Variables para almacenar la matrícula, la carrera y el semestre del alumno.
    float PRO; // Variable para almacenar el promedio del alumno.

    printf("Ingrese matrícula: "); // Solicita al usuario que ingrese la matrícula del alumno.
    scanf("%d", &MAT); // Lee la matrícula ingresada por el usuario y la almacena en la variable MAT.

    printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica): "); // Solicita al usuario que ingrese la carrera del alumno.
    scanf("%d", &CAR); // Lee la carrera ingresada por el usuario y la almacena en la variable CAR.

    printf("Ingrese semestre: "); // Solicita al usuario que ingrese el semestre del alumno.
    scanf("%d", &SEM); // Lee el semestre ingresado por el usuario y lo almacena en la variable SEM.

    printf("Ingrese promedio: "); // Solicita al usuario que ingrese el promedio del alumno.
    scanf("%f", &PRO); // Lee el promedio ingresado por el usuario y lo almacena en la variable PRO.

    switch(CAR) // Inicia la estructura switch basada en la carrera del alumno.
    { // Inicia el bloque switch.

        case 1: // Carrera Industrial.
            if (SEM >= 6 && PRO >= 8.5) // Si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.5.
                printf("\n%d %d %5.2f", MAT, CAR, PRO); // Imprime la matrícula, la carrera y el promedio del alumno.
            break;

        case 2: // Carrera Telemática.
            if (SEM >= 5 && PRO >= 9.0) // Si el semestre es mayor o igual a 5 y el promedio es mayor o igual a 9.0.
                printf("\n%d %d %5.2f", MAT, CAR, PRO); // Imprime la matrícula, la carrera y el promedio del alumno.
            break;

        case 3: // Carrera Computación.
            if (SEM >= 6 && PRO >= 8.8) // Si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.8.
                printf("\n%d %d %5.2f", MAT, CAR, PRO); // Imprime la matrícula, la carrera y el promedio del alumno.
            break;

        case 4: // Carrera Mecánica.
            if (SEM >= 7 && PRO >= 9.0) // Si el semestre es mayor o igual a 7 y el promedio es mayor o igual a 9.0.
                printf("\n%d %d %5.2f", MAT, CAR, PRO); // Imprime la matrícula, la carrera y el promedio del alumno.
            break;

        default: printf("\nError en la carrera"); // Imprime un mensaje de error.// Si la carrera ingresada no es válida.
            printf("\nError en la carrera"); // Imprime un mensaje de error.
            break;

    } // Termina el bloque switch.

} // Termina el bloque de la función main.
