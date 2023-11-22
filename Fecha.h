#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include "String.h"

typedef struct {int dia;
                int mes;
                int anio;}fecha;

// Cargar fecha
void cargarFecha (fecha &f);

// Desplegar fecha
void desplegarFecha(fecha f);

// Selectora día
int darDia (fecha f);

// Selectora mes
int darMes(fecha f);

// Selectora año
int darAnio(fecha f);

// Validar fecha
boolean validarFecha (fecha f);

// Obtener menor fecha
boolean MenorFecha (fecha f1, fecha f2);

#endif // FECHA_H_INCLUDED
