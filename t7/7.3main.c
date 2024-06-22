#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0="buenos dias\0";
    char cad1[20]="Hola\0";
    char cad2[]="Mexico\0";
    char cad3[]={'B','i','e','n','v','e','n','i','d','o','s','\0'};

    char cad4[20],cad5[20],cad[20],cad6[20];
    printf("\n la cadena cad0 es: ");
    puts(cad0);
     printf("\n la cadena de cad1 es: ");
     printf("%s",cad1);
     printf("\n la cadena cad2: ");
     puts(cad2);
     printf("\n la cadena cad3: ");
     puts(cad3);
     printf("\n ingrese una linea de texto: ");
     gets(cad4);
     printf("cadena nueva cad4: ");
     puts(cad4);
     fflush(stdin);

    printf("\n ingrese una linea de texto: ");
    scanf("%s",cad5);
    printf("\n la cadena de cad5: ");
    printf("%s",cad5);

    fflush(stdin);
    char p;
    int i=0;
    printf("\n ingrese una linea de texto: \n");

    while ((p=getchar())!='\n')
    cad6[i++] = p;
    cad6[i]='\0';
    printf("\n la cadena cad6 es: ");
    puts(cad6);

    return 0;
}
