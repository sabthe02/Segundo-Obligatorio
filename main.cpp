#include "Menus.h"
#include "Paciente.h"
#include "Consulta.h"
#include "Consultorio.h"

int main()
{
int selec, selecc, sele, selecci;
fecha f;
paciente p;
ABB a;
long int cedula, nume;

//FILE *f = fopen("Pacientes.dat", "rb");
//LevantarPacientes (a, "Pacientes.dat");
//fclose(f);

while (selec != 4) {
    menuPrincipal (selec);
        switch (selec) {
        case 1: while (selecc != 4) {
                menuAltasYBajas (selecc);
                fflush(stdin);
                    switch (selecc) {
                        case 1: printf("\nRegistrar alta de un paciente");
                        cargarPaciente(p);
                        while (existe(a, seleccionarCedulaPaciente(p))) {
                            printf("\nError, paciente ya existe, ingresar otra cedula ");
                        }
                        Insert(a, p);
                        break;
                        case 2: printf("\nRegistrar nueva consulta de un paciente ");
                        break;
                        case 3: printf("\nRegistrar baja de un paciente ");
                        break;
                        case 4: printf("\nVolviendo al menu principal...");
                        break;
                    }
                }
        break;
        case 2: while (sele != 5) {
                menuListados (sele);
                fflush(stdin);
                    switch (sele) {
                        case 1: printf("\nListar todos los pacientes registrados en el sistema, ordenados por cedula de identidad de menor a mayor ");
                        break;
                        case 2: printf("\nListar aquellos pacientes registrados en el sistema que aun no han realizado ninguna consulta al dentista ");
                        break;
                        case 3: printf("\nDada la cedula que identifica a un paciente, listar todas sus consultas, ordenadas en forma cronologica inversa ");
                        break;
                        case 4: printf("\nDada una fecha, listar todas las consultas realizadas a partir de dicha fecha ");
                        break;
                        case 5: printf("\nVolviendo al menu principal...");
                        break;
                    }
                }
        break;
        case 3: while (selecci != 5) {
                menuConsultas(selecci);
                fflush(stdin);
                    switch (selecci) {
                        case 1: printf("\nDada una cantidad de consultas, obtener la cantidad de pacientes registrados en el sistema que han realizado al menos dicha cantidad de consultas hasta el momento ");
                        break;
                        case 2: printf("\nObtener la cantidad de consultas de cada tipo ");
                        break;
                        case 3: printf("\nDada una fecha, obtener la cantidad de consultas que fueron realizadas en dicha fecha: ");
                                cargarFecha(f);
                        break;
                        case 4: printf("\nObtener la cedula del paciente que ha realizado la mayor cantidad de consultas hasta el momento, junto con la cantidad de consultas correspondiente ");
                        break;
                        case 5: printf("\nVolviendo al menu principal...");
                        break;
                    }
                }
        break;
        case 4: printf("\nSaliendo...");
//                FILE *f = fopen ("Pacientes.dat", "wb");
//                BajarPacientes(a, "Pacientes.dat");
//                fclose(f);
        break;
    }

}


}
