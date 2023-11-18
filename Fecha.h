#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include "String.h"

typedef struct {int dia;
                int mes;
                int anio;}fecha;

void cargarFecha (fecha &f);

void desplegarFecha(fecha f);

int darDia (fecha f);

int darMes(fecha f);

int darAnio(fecha f);

boolean validarFecha (fecha f);

boolean MenorFecha (fecha f1, fecha f2);

#endif // FECHA_H_INCLUDED
