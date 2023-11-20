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

void desplegarConsulta (Consulta c);

void cargarConsulta (Consulta &c);

fecha seleccionarFecha (Consulta c);

long int seleccionarCedulaConsulta (Consulta c);

String seleccionarMotivo (Consulta c);

Evaluacion seleccionarEvaluacion (Consulta c);

// Operaciones de archivos
void Bajar_Consulta (Consulta c, FILE * f);

void Levantar_Consulta (Consulta &c, FILE * f);

#endif // CONSULTA_H_INCLUDED
