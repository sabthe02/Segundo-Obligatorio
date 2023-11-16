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
void Insert (ABB &a, paciente valor);

//Altas y Bajas
// Registrar los datos de un nuevo paciente. Se debe verificar previamente que no exista otro paciente registrado con la misma cédula.
// Registrar la realización de una nueva consulta hecha por un paciente.

boolean existe (ABB a, long int cedula);

//Se debe verificar previamente que la cédula de dicho paciente exista en el sistema
//y que la fecha de la nueva consulta sea válida e igual o posterior a la fecha de la última consulta registrada hasta el momento en el sistema.
// Dada la cédula que identifica a un paciente, eliminar dicho paciente del sistema.
//Se debe verificar previamente que dicha cédula exista en el sistema.
//También se deben eliminar del sistema todas las consultas realizadas por dicho paciente.

// Dada la cédula que identifica a un paciente, eliminar dicho paciente del sistema.
// Se debe verificar previamente que dicha cédula exista en el sistema.
//También se deben eliminar del sistema todas las consultas realizadas por dicho paciente.

paciente Minimo (ABB a);

void Borrar_Minimo (ABB &a);

void eliminarConCedula (long int cedula, ABB &a);

//
void BajarPacientes (ABB a, String nomArch);
//Guardar información de todos los pacientes en archivo
//Precondicion: Archivo viene abierto en modo escritura

void LevantarPacientes (ABB &a, String nomArch);
//Subir información de todos los pacientes desde archivo

#endif // CONSULTORIO_H_INCLUDED
