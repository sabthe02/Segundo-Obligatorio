#include "Archivo.h"

boolean ExisteArchivo (String nomArch)
{
boolean existeArchivo = TRUE;
FILE * f = fopen (nomArch, "rb");
if (f == NULL)
existeArchivo = FALSE;
else
fclose (f);
return existeArchivo;
}

void Bajar_String (String s, FILE * f){
int i =0;

while (s[i]!='\0' && (!feof(f))) {
    fwrite(&s[i], sizeof(char),1, f);
    i++;
}
fwrite(&s[i], sizeof(char),1, f);

}

void Levantar_String (String &s, FILE * f) {
int i = 0;
String aux;
aux = new char [MAX];

fread(&aux[i], sizeof(char), 1, f);

while (aux[i]!='\0' && (!feof(f))) {
    i++;
    fread(&aux[i], sizeof(char), 1, f);
}
strcop(s, aux);
delete []aux;
}

//CONSULTAS

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

void Bajar_Consultas (Lista L , String nomArchConsultas) {
FILE * f = fopen("Consultas.txt", "wb");
while (L != NULL){
    Bajar_Consulta (L -> info, f);
    L = L -> sig;
}
fclose(f);
}

void Levantar_Consultas (Lista &L, String nomArchConsultas) {
//printf("\nEntra en Levantar Consultas");
FILE * f = fopen("Consultas.txt", "rb");
Consulta buffer;
Crear (L);
//printf("\nCrea L"); // Hasta acá llega

Levantar_Consulta (buffer, f); // Acá se cuelga
//printf("\nLevanta primera consulta");

while (!feof(f)) {
        //printf("\nEntra en while levantar");
    InsBackIter (L, buffer);
    //printf("\nInsertó consulta en Lista");
    Levantar_Consulta (buffer, f);
}

fclose (f);
}

//PACIENTES

void BajarPaciente (paciente p, FILE * f) {

fwrite(&p.cedula, sizeof(long int), 1, f);
Bajar_String (p.nombre, f);
Bajar_String (p.apellido, f);
fwrite(&p.telefono, sizeof(long int), 1, f);
fwrite(&p.cantConsultas, sizeof(int), 1, f);
}

void LevantarPaciente (paciente &p, FILE * f) {

//printf("\nEntra a Levantar Paciente");
fread(&p.cedula, sizeof(long int), 1, f);
strcrear (p.nombre);
Levantar_String (p.nombre, f);
strcrear (p.apellido);
Levantar_String (p.apellido, f);
fread(&p.telefono, sizeof(long int), 1, f);
fread(&p.cantConsultas, sizeof(int), 1, f);

}

void BajarPacientes (ABB a, FILE *f) {

if (a != NULL) {

BajarPaciente(a->info, f);
BajarPacientes (a->hizq, f);
BajarPacientes (a->hder, f);
}

}

void LevantarPacientes (ABB &a, String nomArchPacientes) {
FILE *f2 = fopen("Pacientes.txt", "rb");
paciente buffer;
Crear(a);

LevantarPaciente (buffer, f2);
while (!feof(f2)) {
    Insert(a, buffer);
    LevantarPaciente(buffer, f2);

}

fclose (f2);

}
