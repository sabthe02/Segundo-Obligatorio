#include "Consulta.h"

void desplegarConsulta(Consulta c) {
    desplegarFecha(c.fec);
    printf("\nCedula de la consulta: %ld", c.cedulaEnConsulta);
    print(c.motivo);
    desplegarEvaluacion(c.evaluacion);
}

void cargarConsulta(Consulta &c) {
    cargarFecha(c.fec);
    printf("\nIngrese cedula de la consulta: ");
    scanf("%ld", &c.cedulaEnConsulta);
    printf("\nIngrese el motivo de la consulta: ");
    scan(c.motivo);
    printf("\nIngrese la evaluacion de la consulta: ");
    cargarEvaluacion(c.evaluacion);
}

fecha seleccionarFecha(Consulta c) {
    return c.fec;
}

long int seleccionarCedulaConsulta(Consulta c) {
    return c.cedulaEnConsulta;
}

String seleccionarMotivo(Consulta c) {
    return c.motivo;
}

Evaluacion seleccionarEvaluacion(Consulta c) {
    return c.evaluacion;
}
