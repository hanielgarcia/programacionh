#include <stdio.h>
#include <stdlib.h>

int NumeroDeNodosDeLaLista(Nodo *L)
{
int k = 0;
Nodo *p;
p = L;
while (p != NULL)
{
k++;
p = p->Sig;
}
return(k);
}
void EliminaPosicion (Nodo** L, int i)
{
int k = 0;
Nodo *Ptr,*Ant;
Ptr = *L;
Ant = NULL;
while ( (k < i) && (Ptr != NULL))
{
k++;
Ant = Ptr;
Ptr = Ptr->Sig;
}
if(k == i) /* borrado*/
{
if(Ant == NULL) /* se borra en la primera posición*/
*L = Ptr->Sig;
else
Ant->Sig = Ptr->Sig;
free(Ptr);
}
}
void InsertarLista(Nodo* Ant,Telemento e)
{
Nodo *Nuevo;
Nuevo = (Nodo*)malloc(sizeof(Nodo));
Nuevo -> e = e;
Nuevo -> Sig = Ant -> Sig;
Ant -> Sig = Nuevo;
}
Nodo* BuscarEnLista (Nodo* L, Telemento e)
{
Nodo *Ptr;
for (Ptr = L; Ptr != NULL; Ptr = Ptr ->Sig )
if (Ptr-> e == e)
return Ptr;
return NULL; /* no encontreado*/
}
