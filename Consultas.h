#ifndef CONSULTAS_H_INCLUDED
#define CONSULTAS_H_INCLUDED
#include "Consulta.h"

typedef struct nodoB {
    Consulta info;
    nodoB *sig;
} nodo2;

typedef nodo2 *Lista;

//Crea una lista
void Crear (Lista &L);

//Verifica si la lista esta vacia
boolean Vacia(Lista L);

/* Precondición: lista NO vacía */
Consulta Primero(Lista L);

/* Precondición: lista NO vacía */
void Resto(Lista &L);

void InsFront(Lista &L, Consulta e);

//Dada una lista, devuelve su largo (la cantidad de elementos de la lista)
Consulta LargoIter(Lista L);

//Dada una lista, despliega sus valores por pantalla.
void DesplegarIter(Lista L);

//Dada una lista, devuelve su último elemento
// Precondición: L no está vacía
Consulta UltimoIter(Lista L);

/*Dada una lista y un número entero, devuelve la cantidad de veces que dicho
entero aparece en la lista.*/
Consulta ContarIter(int e, Lista L);

/*Dada una lista y un número entero, devuelve TRUE si dicho entero
pertenece a la lista y FALSE en caso contrario.*/
boolean PerteneceIter(Lista L, int e);

/*Dada una lista y dos números enteros, sustituye cada ocurrencia del
primer entero en la lista por el segundo entero.*/
void SustituirIter(Lista &L, int e1, int e2);

/*Dada una lista, devuelve el mayor entero almacenado en ella*/
// Precondición: L no está vacía
Consulta MaximoIter(Lista L);

/*Dada una lista, devuelve otras dos nuevas listas, una de ellas
conteniendo todos los valores pares de la lista original, y la otra conteniendo todos los valores
impares de la lista original (se permite usar la operación básica InsFront para esta parte).
No se debe modificar la lista original.*/
void ParesImparesIter(Lista L, Lista &P, Lista &I);

//Dada una lista y un número entero, agrega dicho entero al final de la lista.
void InsBackIter(Lista &L, Consulta c);

void sumarConsultas(Lista &L, Consulta &c);

#endif // CONSULTAS_H_INCLUDED
