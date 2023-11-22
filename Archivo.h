#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED

#include "String.h"
#include "Boolean.h"
#include "Consulta.h"
#include "Consultas.h"
#include "Consultorio.h"
#include "Consultorio.h"

boolean ExisteArchivo (String nomArch);
void Bajar_String (String s, FILE * f);
void Levantar_String (String &s, FILE * f);

//CONSULTAS
void Bajar_Consulta (Consulta c, FILE * f);
void Levantar_Consulta (Consulta &c, FILE * f);
void Bajar_Consultas (Lista L , String nomArchConsultas);
void Levantar_Consultas (Lista &L, String nomArchConsultas);

//PACIENTES
void BajarPaciente (paciente p, FILE * f);
void LevantarPaciente (paciente &p, FILE * f);
void BajarPacientes (ABB a, FILE *f);
void LevantarPacientes (ABB &a, String nomArchPacientes);


#endif // ARCHIVO_H_INCLUDED
