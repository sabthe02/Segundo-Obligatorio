#ifndef CONSULTORIO_H_INCLUDED
#define CONSULTORIO_H_INCLUDED
#include "Paciente.h"


typedef struct nodoA    {paciente info;
                        nodoA *hizq;
                        nodoA *hder;
                        }nodo;
typedef nodo *ABB;

//Crear un árbol
void Crear (ABB &a);

// Saber si el árbol está vacío
boolean Vacio (ABB a);

// Devolver raiz
//Precondición: Árbol no vacío
paciente darRaiz (ABB a);

// Obtener subárbol izquierdo
//Precondición: Árbol no vacío
ABB HijoIzq (ABB a);

// Obtener subárbol derecho
//Precondición: Árbol no vacío

ABB HijoDer (ABB a);

// Dados dos árboles y un valor, devolver un nuevo árbol, colocando el valor como raíz y los dos árboles como subárboles
//Precondición: el valor no existía previamente en el ABB
void Insert (ABB &a, /*T*/ int valor);

#endif // CONSULTORIO_H_INCLUDED
