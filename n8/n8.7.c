#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int Exponente;
    float Coeficiente;
} Telemento;

typedef struct polinomio {
    Telemento el;
    struct polinomio *Sig;
} Polinomio;

Polinomio* NuevoNodo(Telemento el) {
    Polinomio *NodoNuevo = (Polinomio*)malloc(sizeof(Polinomio));
    NodoNuevo->el = el;
    NodoNuevo->Sig = NULL;
    return NodoNuevo;
}

void AgregaTermino(Telemento el, Polinomio **Primero, Polinomio **Ultimo) {
    Polinomio *Aux = NuevoNodo(el);
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
    Polinomio *Primero = NULL, *Ultimo = NULL;

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
    Polinomio *Aux = *q;
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
    Polinomio *Aux = p, *Primero = NULL, *Ultimo = NULL;
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
    Polinomio *Aux1 = q;
    *Producto = NULL;

    while (Aux1 != NULL) {
        Polinomio *ProductoAuxiliar;
        MultiplicaPorMonomio(p, Aux1, &ProductoAuxiliar);
        SumaPolinomios(*Producto, ProductoAuxiliar, Producto);
        Aux1 = Aux1->Sig;
    }
}

void DividePolinomios(Polinomio *p, Polinomio *q, Polinomio **Cociente, Polinomio **Resto) {
    Polinomio *Dividendo = p, *Divisor = q, *Multiplicando, *Suma, *Primero = NULL, *Ultimo = NULL;
    Telemento x, y, z;
    int expdeDividendo, expdeDivisor;

    if (Divisor == NULL) {
        expdeDivisor = 32767;
    } else {
        expdeDivisor = Divisor->el.Exponente;
        y = Divisor->el;
    }

    if (Dividendo == NULL) {
        expdeDividendo = 0;
    } else {
        expdeDividendo = Dividendo->el.Exponente;
        x = Dividendo->el;
    }

    while (expdeDividendo >= expdeDivisor) {
        z.Exponente = x.Exponente - y.Exponente;
        z.Coeficiente = x.Coeficiente / y.Coeficiente;
        Multiplicando = NuevoNodo(z);
        MultiplicaPolinomios(Divisor, Multiplicando, &Suma);
        AgregaTermino(z, &Primero, &Ultimo);
        RestaPolinomios(Dividendo, Suma, &Dividendo);

        if (Dividendo == NULL) {
            expdeDividendo = 0;
        } else {
            expdeDividendo = Dividendo->el.Exponente;
            x = Dividendo->el;
        }
    }

    *Cociente = Primero;
    *Resto = Dividendo;
}

float Valor(Polinomio *p, float x) {
    Polinomio *Aux = p;
    float Suma = 0;
    Telemento z;

    while (Aux != NULL) {
        z = Aux->el;
        Suma += z.Coeficiente * pow(x, z.Exponente);
        Aux = Aux->Sig;
    }

    return Suma;
}

void Deriva(Polinomio **p) {
    Polinomio *Aux = *p, *Anterior = NULL;
    Telemento y;
    int sw = 0;

    while (Aux != NULL) {
        y = Aux->el;
        if (y.Exponente == 0) {
            if (Anterior == NULL) {
                *p = NULL;
            } else {
                Anterior->Sig = NULL;
            }
            free(Aux);
            Aux = NULL;
            sw = 1;
        } else {
            y.Coeficiente *= y.Exponente;
            y.Exponente--;
            Aux->el = y;
            Anterior = Aux;
            Aux = Aux->Sig;
        }

        if (sw) {
            free(Anterior);
        }
    }
}

void InsertarOrden(Polinomio **L, Telemento e) {
    int Encontrado = 0;
    Polinomio *Nuevo = NuevoNodo(e);
    Polinomio *Aux = *L, *Anterior = NULL;

    while ((Aux != NULL) && (!Encontrado)) {
        if (Aux->el.Exponente > e.Exponente) {
            Anterior = Aux;
            Aux = Aux->Sig;
        } else {
            Encontrado = 1;
        }
    }

    if (Aux == *L) {
        Nuevo->Sig = *L;
        *L = Nuevo;
    } else {
        Nuevo->Sig = Aux;
        Anterior->Sig = Nuevo;
    }
}

void LeePolinomio(Polinomio **p) {
    Telemento x;
    *p = NULL;

    do {
        scanf("%f %d", &x.Coeficiente, &x.Exponente);
        if (x.Exponente >= 0) {
            InsertarOrden(p, x);
        }
    } while (x.Exponente >= 0);
}
int main() {
    return 0;
}
