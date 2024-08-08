#include <stdio.h>
#include <stdlib.h>

typedef int Telemento;

typedef struct Registro {
    Telemento e;
    struct Registro* Sig;
} Nodo;

Nodo* NuevoNodo(Telemento e) {
    Nodo *nn;
    nn = (Nodo*)malloc(sizeof(Nodo));
    if (nn == NULL) {
        fprintf(stderr, "Error al asignar memoria en NuevoNodo\n");
        exit(1);
    }
    nn->e = e;
    nn->Sig = NULL;
    return nn;
}

void InsertarOrd(Nodo** L, Telemento e) {
    Nodo *Nuevo, *Ant, *Pos;
    Nuevo = NuevoNodo(e);
    if (*L == NULL) {
        *L = Nuevo;
    } else if (e <= (*L)->e) {
        Nuevo->Sig = *L;
        *L = Nuevo;
    } else {
        Ant = Pos = *L;
        while ((e > Pos->e) && (Pos->Sig != NULL)) {
            Ant = Pos;
            Pos = Pos->Sig;
        }
        if (e > Pos->e) {
            Ant = Pos;
        }
        Nuevo->Sig = Ant->Sig;
        Ant->Sig = Nuevo;
    }
}

void BorrarOrd(Nodo** L, Telemento e) {
    Nodo *Ant, *Pos;
    int Encontrado = 0;
    Ant = NULL;
    Pos = *L;
    while ((!Encontrado) && (Pos != NULL)) {
        Encontrado = (e <= (Pos->e));
        if (!Encontrado) {
            Ant = Pos;
            Pos = Pos->Sig;
        }
    }
    if (Encontrado) {
        Encontrado = ((Pos->e) == e);
        if (Encontrado) {
            if (Ant == NULL) {
                *L = Pos->Sig;
            } else {
                Ant->Sig = Pos->Sig;
            }
            free(Pos);
        }
    }
}

int main() {
    Nodo *lista = NULL;

    InsertarOrd(&lista, 10);
    InsertarOrd(&lista, 20);
    InsertarOrd(&lista, 15);
    InsertarOrd(&lista, 5);

    Nodo *temp = lista;
    while (temp != NULL) {
        printf("%d -> ", temp->e);
        temp = temp->Sig;
    }
    printf("NULL\n");

    BorrarOrd(&lista, 15);
    BorrarOrd(&lista, 5);

    temp = lista;
    while (temp != NULL) {
        printf("%d -> ", temp->e);
        temp = temp->Sig;
    }
    printf("NULL\n");

    while (lista != NULL) {
        Nodo *to_free = lista;
        lista = lista->Sig;
        free(to_free);
    }

    return 0;
}
