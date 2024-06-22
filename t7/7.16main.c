#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad1[50], cad2[50];
    char *cad0;
    int i = 0;
    printf("\n Ingrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\n Ingrese la cadena a buscar: ");
    gets(cad2);
    cad0 = cad1;
    while ((cad0 = strstr(cad0, cad2)) != NULL)
    {
        i++;
        cad0++;
    }
    printf("\nEl numero de veces que aparece la segunda cadena es: %d", i);
}

