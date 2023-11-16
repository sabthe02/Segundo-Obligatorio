#ifndef CONSULTAS_H_INCLUDED
#define CONSULTAS_H_INCLUDED
#include "Consulta.h"

typedef struct nodoB{   Consulta info;
                        nodoB *sig;
                    }nodo2;

typedef nodo2 *Lista;



#endif // CONSULTAS_H_INCLUDED
