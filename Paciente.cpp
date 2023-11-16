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
FILE *f;
printf("\nIngresar cedula del paciente: ");
scanf("%ld",&p.cedula);
fflush(stdin);
printf("\nIngrese nombre del paciente: ");
strcrear(p.nombre);
scan (p.nombre);
printf("\nIngrese apellido del paciente: ");
strcrear(p.apellido);
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


void BajarPaciente (paciente p, FILE * f) {

fwrite(&p.cedula, sizeof(long int), 1, f);
Bajar_String (p.nombre, f);
Bajar_String (p.apellido, f);
fwrite(&p.telefono, sizeof(long int), 1, f);
fwrite(&p.cantConsultas, sizeof(int), 1, f);

}

void LevantarPaciente (paciente &p, FILE * f) {

fread(&p.cedula, sizeof(long int), 1, f);
Levantar_String (p.nombre, f);
Levantar_String (p.apellido, f);
fread(&p.telefono, sizeof(long int), 1, f);
fread(&p.cantConsultas, sizeof(int), 1, f);

}


