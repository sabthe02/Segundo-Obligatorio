#ifndef CONSULTORIO_H_INCLUDED
#define CONSULTORIO_H_INCLUDED
#include "Paciente.h"


typedef struct nodoA    {paciente info;
                        nodoA *hizq;
                        nodoA *hder;
                        }nodo;
typedef nodo *ABB;

//Crear un �rbol
void Crear (ABB &a);

// Saber si el �rbol est� vac�o
boolean Vacio (ABB a);

// Devolver raiz
//Precondici�n: �rbol no vac�o
paciente darRaiz (ABB a);

// Obtener sub�rbol izquierdo
//Precondici�n: �rbol no vac�o
ABB HijoIzq (ABB a);

// Obtener sub�rbol derecho
//Precondici�n: �rbol no vac�o

ABB HijoDer (ABB a);

// Dados dos �rboles y un valor, devolver un nuevo �rbol, colocando el valor como ra�z y los dos �rboles como sub�rboles
//Precondici�n: el valor no exist�a previamente en el ABB
void Insert (ABB &a, /*T*/ int valor);

#endif // CONSULTORIO_H_INCLUDED
