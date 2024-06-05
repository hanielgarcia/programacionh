# include <stdio.h> // Incluye la biblioteca estándar de entrada y salida de C.

/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de un empleado, determina si el mismo reúne las condiciones establecidas por la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */

void main(void) // Define la función principal del programa.
{ // Inicia el bloque de la función main.

    int CLA, CAT, ANT, RES; // Variables para almacenar la clave, categoría, antigüedad y resultado del trabajador.

    printf("\nIngrese la clave, categoría y antigüedad del trabajador:"); // Solicita al usuario que ingrese la clave, categoría y antigüedad del trabajador.
    scanf("%d %d %d", &CLA, &CAT, &ANT); // Lee los valores ingresados por el usuario y los almacena en las variables CLA, CAT y ANT.

    switch (CAT) // Inicia la estructura switch basada en la categoría del trabajador.
    { // Inicia el bloque switch.

        case 3:
        case 4: if (ANT >= 5) // Si la categoría es 3 o 4 y la antigüedad es mayor o igual a 5 años.
                    RES = 1; // Establece el resultado como verdadero.
                else
                    RES = 0; // Establece el resultado como falso.
                break; // Finaliza el caso.

        case 2: if (ANT >= 7) // Si la categoría es 2 y la antigüedad es mayor o igual a 7 años.
                    RES = 1; // Establece el resultado como verdadero.
                else
                    RES = 0; // Establece el resultado como falso.
                break; // Finaliza el caso.

        default: RES = 0; // Para cualquier otra categoría, establece el resultado como falso.
                 break; // Finaliza el caso por defecto.

    } // Termina el bloque switch.

    if (RES) // Comprueba si el resultado es verdadero.
        printf("\nEl trabajador con clave %d reúne las condiciones para el puesto", CLA); // Si el resultado es verdadero, imprime un mensaje indicando que el trabajador reúne las condiciones para el puesto.
    else
        printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto", CLA); // Si el resultado es falso, imprime un mensaje indicando que el trabajador no reúne las condiciones para el puesto.

} // Termina el bloque de la función main.

