#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int Exponente;
    float Coeficiente;
} Telemento;

struct polinomio {
    Telemento el;
    struct polinomio *Sig;
};

typedef struct polinomio Polinomio;

Polinomio* NuevoNodo(Telemento el) {
    Polinomio *NodoNuevo;
    NodoNuevo = (Polinomio*)malloc(sizeof(Polinomio));
    NodoNuevo->el = el;
    NodoNuevo->Sig = NULL;
    return NodoNuevo;
}

void AgregaTermino(Telemento el, Polinomio **Primero, Polinomio **Ultimo) {

    Polinomio *Aux;
    Aux = NuevoNodo(el);
    if (*Ultimo == NULL) {
        *Primero = Aux;
    } else {
        (*Ultimo)->Sig = Aux;
    }
    *Ultimo = Aux;
}

void SumaPolinomios(Polinomio *p, Polinomio *q, Polinomio **Suma) {

    float c;
    Telemento e;
    Polinomio *Primero, *Ultimo;
    Primero = NULL;
    Ultimo = NULL;

    while ((p != NULL) && (q != NULL)) {
        if (p->el.Exponente == q->el.Exponente) {
            c = p->el.Coeficiente + q->el.Coeficiente;
            if (fabs(c) > 0.00001) {

                e.Coeficiente = c;
                e.Exponente = p->el.Exponente;
                AgregaTermino(e, &Primero, &Ultimo);
            }

            p = p->Sig;
            q = q->Sig;
        } else if (p->el.Exponente > q->el.Exponente) {
            AgregaTermino(p->el, &Primero, &Ultimo);
            p = p->Sig;
        } else {

            AgregaTermino(q->el, &Primero, &Ultimo);
            q = q->Sig;
        }
    }


    while (p != NULL) {
        AgregaTermino(p->el, &Primero, &Ultimo);
        p = p->Sig;
    }
    while (q != NULL) {
        AgregaTermino(q->el, &Primero, &Ultimo);
        q = q->Sig;
    }

    *Suma = Primero;
}

void CambiaDeSigno(Polinomio **q) {

    Polinomio *Aux;
    Aux = *q;
    while (Aux != NULL) {
        Aux->el.Coeficiente = -Aux->el.Coeficiente;
        Aux = Aux->Sig;
    }
}

void RestaPolinomios(Polinomio *p, Polinomio *q, Polinomio **Suma) {

    CambiaDeSigno(&q);
    SumaPolinomios(p, q, Suma);
    CambiaDeSigno(&q);
}

void MultiplicaPorMonomio(Polinomio *p, Polinomio *Monomio, Polinomio **Pro) {

    Telemento x, y, z;
    Polinomio *Aux, *Primero, *Ultimo;
    Primero = NULL;
    Ultimo = NULL;
    Aux = p;
    y = Monomio->el;
    while (Aux != NULL) {
        x = Aux->el;
        z.Exponente = x.Exponente + y.Exponente;
        z.Coeficiente = x.Coeficiente * y.Coeficiente;
        AgregaTermino(z, &Primero, &Ultimo);
        Aux = Aux->Sig;
    }
    *Pro = Primero;
}

void MultiplicaPolinomios(Polinomio *p, Polinomio *q, Polinomio **Producto) {

    Polinomio *Aux, *Aux1, *ProductoAuxiliar;
    *Producto = NULL;
    Aux = p;
    Aux1 = q;
    while (Aux1 != NULL) {
        MultiplicaPorMonomio(Aux, Aux1, &ProductoAuxiliar);
        SumaPolinomios(*Producto, ProductoAuxiliar, Producto);
        Aux1 = Aux1->Sig;
    }
}

int main() {
    return 0;
}
