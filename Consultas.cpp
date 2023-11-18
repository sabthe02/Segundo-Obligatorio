#include "Consultas.h"

void Crear (Lista &L) {
    L = NULL;
}

boolean Vacia(Lista L) {
    boolean es = FALSE;
    if (L == NULL)
        es = TRUE;
    return es;
}


Consulta Primero(Lista L) {
    return L->info;
}


void Resto(Lista &L) {
    Lista aux = L;
    L = L->sig;
    delete aux;
}

void InsFront(Lista &L, Consulta e) {
    Lista aux = new nodo2;
    aux->info = e;
    aux->sig = L;
    L = aux;
}

/*
Consulta LargoIter(Lista L) {
    int cant = 0;
    while (L != NULL) {
        cant++;
        L = L->sig;
    }
    return cant;
}
*/

void DesplegarIter(Lista L)
{
    while (L != NULL)
    {
        desplegarConsulta (L->info);
        L = L->sig;
    }
}

/*
Consulta UltimoIter(Lista L) {
    while (L->sig != NULL)
        L = L->sig;
    return (L->info);
}

Consulta ContarIter(int e, Lista L) {
    int cant = 0;
    while (L != NULL) {
        if (L->info == e)
            cant++;
        L = L->sig;
    }
    return cant;
}

boolean PerteneceIter(Lista L, int e) {
    boolean esta = FALSE;
    while (L != NULL && !esta) {
        if (L->info == e)
            esta = TRUE;
        else
            L = L->sig;
    }
    return esta;
}

void SustituirIter(Lista &L, int e1, int e2) {
    Lista aux = L;
    while (aux != NULL) {
        if (aux->info == e1)
            aux->info = e2;
        aux = aux->sig;
    }
}

Consulta MaximoIter(Lista L) // Precondición: L no está vacía
{
    Consulta max = L->info;
    L = L->sig;
    while (L != NULL) {
        if (L->info > max)
            max = L->info;
        L = L->sig;
    }
    return max;
}

void ParesImparesIter(Lista L, Lista &P, Lista &I) {
    while (L != NULL) {
        if (L->info % 2 == 0)
            InsFront(P, L->info);
        else
            InsFront(I, L->info);
        L = L->sig;
    }
}


void InsBackIter(Lista &L, Consulta c)
{
    Lista nuevo = new nodo;
    nuevo->info = c;
    nuevo->sig = NULL;
    if (L == NULL)
        L = nuevo;
    else {
        Lista aux = L;
        while (aux->sig != NULL)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}
*/

void sumarConsultas (Lista &L, Consulta &c)
{
    boolean agregada = FALSE;

    Lista aux;
    Lista aux2;
    Lista aux3;

    if (L == NULL)
    {cargarConsulta(c);
        InsFront(L, c);}

    else {

        aux2 = L;
        aux3 = L;

        aux = new nodo2;
        cargarConsulta(c);
        aux->info = c;

        while (aux2 != NULL && !agregada)
        {if (MenorFecha (seleccionarFecha (aux2->info), seleccionarFecha (aux->info)) == TRUE && MenorFecha (seleccionarFecha (L->info), seleccionarFecha (aux->info)) == TRUE)
            {aux->sig = aux2;
                aux2 = aux;
                L = aux2;
                agregada = TRUE;
            }
                // insfront

            else if (MenorFecha (seleccionarFecha (aux2->info), seleccionarFecha (aux->info)) == TRUE && MenorFecha (seleccionarFecha (L->info), seleccionarFecha (aux->info)) == FALSE)
            {L->sig = aux;
                aux->sig = aux2;
                agregada = TRUE;}

            else aux2 = aux2->sig;
        }

        if (agregada == FALSE)
        {

            while (aux3->sig != NULL)
            {aux3 = aux3->sig;}

            aux3->sig = new nodo2;
            aux3->sig->info = c;
            aux3->sig->sig = NULL;
        }

        //InsBackIter
    }
}

