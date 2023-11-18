#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include <stdio.h>


typedef enum {  EN_TRATAMIENTO,
                NECESITA_PROTESIS,
                SALUDABLE} Evaluacion;

void desplegarEvaluacion (Evaluacion e);

void cargarEvaluacion (Evaluacion &e);

Evaluacion seleccionarEvaluacion (Evaluacion e);


#endif // EVALUACION_H_INCLUDED
