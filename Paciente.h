#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
#include "Consultas.h"

typedef struct {long int cedula;
    String nombre;
    String apellido;
    long int telefono;
    int cantConsultas;
}paciente;

void desplegarPaciente (paciente p);

void cargarPaciente (paciente &p);

long int seleccionarCedulaPaciente (paciente p);

String seleccionarNombre (paciente p);

String seleccionarApellido (paciente p);

long int seleccionarTelefono (paciente p);

int seleccionarCantConsultas (paciente p);

Lista seleccionarConsultas (paciente p);

//Precondici�n: Paciente existe
void sumarConsulta (paciente &p);

void BajarPaciente (paciente p, FILE * f); // Escribe en el archivo los datos del paciente p.
// Precondici�n: El archivo viene abierto para escritura.

void LevantarPaciente (paciente &p, FILE * f); // Lee desde el archivo los datos del paciente p.
// Precondici�n: El archivo viene abierto para lectura.

#endif // PACIENTE_H_INCLUDED
