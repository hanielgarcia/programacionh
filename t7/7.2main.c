#include <stdio.h>
#include <ctype.h>

void main (void)

{
char p1;
printf("\n ingrese un caracter para analizar si este es un digito: ");
p1=getchar();
if (isdigit(p1))
printf("%c es un digito",p1);
else
    printf("%c no es un digito",p1);
fflush(stdin);
printf("\n ingrese un carater para examinar si este es una letra: ");
p1=getchar();
if(isalpha (p1))
    printf("%c es una letra \n",p1);
else
    printf("%c no es una letra \n",p1);
fflush(stdin);
printf("\n ingrese un caracter para examininar si este es una letra minuscula: ");
p1=getchar();
if (isalpha(p1))
    if (islower(p1))
    printf("%C es una letra minuscula \nj",p1);
else
    printf("%c no es una letra minuscula \n",p1);
else
    printf("%c no es una letra \n ",p1);
fflush(stdin);
printf("\n ingrese una letra para convertirla de mayuscula a minuscula: ");
p1=getchar();
if(isalpha(p1))
    if(isupper (p1))
    printf("%C fue convertida de mayuscula a minuscula : ",tolower(p1));
else
    printf("%C es una letra minuscula\n",p1);
else
    printf("%C no es una letra \n", p1);
}
