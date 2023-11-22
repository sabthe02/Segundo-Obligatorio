#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include "Consultas.h"

typedef struct {long int cedula;
         String nombre;
         String apellido;
         long int telefono;
         int cantConsultas;
        }paciente;

// Desplegar paciente
void desplegarPaciente (paciente p);

// Cargar paciente
void cargarPaciente (paciente &p);

// Selectora cédula del paciente
long int seleccionarCedulaPaciente (paciente p);

// Selectora nombre del paciente
String seleccionarNombre (paciente p);

// Selectora apellido del paciente
String seleccionarApellido (paciente p);

// Selectora teléfono del paciente
long int seleccionarTelefono (paciente p);

// Selectora cantidad de consultas del paciente
int seleccionarCantConsultas (paciente p);

// Sumar consulta
//Precondición: Paciente existe
void sumarConsulta (paciente &p);


#endif // PACIENTE_H_INCLUDED
