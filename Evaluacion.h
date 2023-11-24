#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include <stdio.h>


typedef enum {  EN_TRATAMIENTO,
                NECESITA_PROTESIS,
                SALUDABLE} Evaluacion;

//Desplegar evaluaci�n
void desplegarEvaluacion (Evaluacion e);

// cargar Evaluaci�n
void cargarEvaluacion (Evaluacion &e);

// Selectora Evaluaci�n
Evaluacion seleccionarEvaluacion (Evaluacion e);


#endif // EVALUACION_H_INCLUDED
