#include "Paciente.h"

void desplegarPaciente (paciente p) {
printf("\n Cedula: %ld ", p.cedula);
printf("Nombre: ");
print(p.nombre);
printf("Apellido: ");
print(p.apellido);
printf(" Telefono: %ld ", p.telefono);
printf("Cantidad de consultas: %d ", p.cantConsultas);
// No pide acá listar detalle de consultas

}

void cargarPaciente (paciente &p) {
printf("\nIngresar cedula del paciente: ");
scanf("%ld",&p.cedula);
printf("\nIngrese nombre del paciente: ");
scan (p.nombre);
printf("\nIngrese apellido del paciente: ");
scan (p.apellido);
printf("\nIngrese telefono del paciente: ");
scanf("%ld", &p.telefono);
p.cantConsultas = 0;
// No pide acá cargar las consultas
}

long int seleccionarCedulaPaciente (paciente p) {
return p.cedula;
}

String seleccionarNombre (paciente p) {
return p.nombre;

}

String seleccionarApellido (paciente p) {
return p.apellido;
}

long int seleccionarTelefono (paciente p) {
return p.telefono;
}

int seleccionarCantConsultas (paciente p) {
return p.cantConsultas;
}

Lista seleccionarConsultas (paciente p) {
return p.Consultas;
}

