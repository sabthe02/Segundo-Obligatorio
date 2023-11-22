#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include <stdio.h>


typedef enum {  EN_TRATAMIENTO,
                NECESITA_PROTESIS,
                SALUDABLE} Evaluacion;

//Desplegar evaluación
void desplegarEvaluacion (Evaluacion e);

//Cargar evaluación
void cargarEvaluacion (Evaluacion &e);

// Selectora evaluación
Evaluacion seleccionarEvaluacion (Evaluacion e);


#endif // EVALUACION_H_INCLUDED
