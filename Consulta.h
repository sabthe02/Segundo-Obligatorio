#ifndef CONSULTA_H_INCLUDED
#define CONSULTA_H_INCLUDED

#include "Fecha.h"
#include "Evaluacion.h"

typedef struct {
                fecha fec;
                long int cedulaEnConsulta;
                String motivo;
                Evaluacion evaluacion;
                } Consulta;

//Desplegar Consulta
void desplegarConsulta (Consulta c);

//Cargar consulta
void cargarConsulta (Consulta &c);

// Selectora fecha
fecha seleccionarFecha (Consulta c);

// Selectora c�dula COnsulta
long int seleccionarCedulaConsulta (Consulta c);

// Selectora motivo
String seleccionarMotivo (Consulta c);

// Selectora Evaluaci�n
Evaluacion seleccionarEvaluacion (Consulta c);


#endif // CONSULTA_H_INCLUDED
