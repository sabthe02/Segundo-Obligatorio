#include "Consulta.h"

void desplegarConsulta(Consulta c) {
    printf("Fecha: ");
    desplegarFecha(c.fec);
    printf(" | Cedula de la consulta: %ld | ", c.cedulaEnConsulta);
    printf("Motivo de la consulta: ");
    print(c.motivo);
    printf(" | Evaluacion: ");
    desplegarEvaluacion(c.evaluacion);
    printf("\n");
}

void cargarConsulta(Consulta &c) {
    cargarFecha(c.fec);
    printf("\nIngrese cedula de la consulta: ");
    scanf("%ld", &c.cedulaEnConsulta);
    fflush(stdin);
    printf("\nIngrese el motivo de la consulta: ");
    fflush (stdin);
    strcrear(c.motivo);
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

///// Operaciones de archivos

void Bajar_Consulta (Consulta c, FILE * f) {

    fwrite (&c.fec, sizeof(fecha), 1, f);
    fwrite (&c.cedulaEnConsulta, sizeof(long int), 1, f);
    Bajar_String (c.motivo, f);
    fwrite (&c.evaluacion, sizeof(Evaluacion), 1, f);

}

void Levantar_Consulta (Consulta &c, FILE * f) {

    fread (&c.fec, sizeof(fecha), 1, f);
    fread(&c.cedulaEnConsulta, sizeof(long int), 1, f);
    strcrear (c.motivo);
    Levantar_String (c.motivo, f);
    fread (&c.evaluacion, sizeof(Evaluacion), 1, f);

}

