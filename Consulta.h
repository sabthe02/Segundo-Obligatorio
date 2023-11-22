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

//Despliega una consulta
void desplegarConsulta (Consulta c);

//Carga datos de una consulta
void cargarConsulta (Consulta &c);

// Selectora fecha
fecha seleccionarFecha (Consulta c);

// Selectora cédula de la consulta
long int seleccionarCedulaConsulta (Consulta c);

// Selectora motivo
String seleccionarMotivo (Consulta c);

// Selectora evaluación
Evaluacion seleccionarEvaluacion (Consulta c);

#endif // CONSULTA_H_INCLUDED
