#include "Menus.h"
#include "Paciente.h"
#include "Consulta.h"
#include "Consultorio.h"

int main()
{
int selec, selecc, sele, selecci, cConsu;
fecha f;
paciente p;
ABB a;
long int cedula, ced, cedu, nume;
Crear(a);
//FILE *f = fopen("Pacientes.dat", "rb");
//LevantarPacientes (a, "Pacientes.dat");
//fclose(f);

while (selec != 4) {
    menuPrincipal (selec);
    fflush(stdin);
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
                        printf("\nIngresar cedula a la cual se quiere sumar consulta: ");
                        scanf("%ld", &cedu);
                        a = sumarConsultaAlABB (a, cedu);
                        // Ramiro
                        // hay que hacer sumarConsulta a esa cedula cuando se registra una nueva consulta
                        break;
                        case 3: printf("\nRegistrar baja de un paciente ");
                        printf("\nIngrese cedula de un paciente para borrarlo del sistema: ");
                        scanf("%ld", &ced);
                        while (!existe(a, ced)) {
                            printf("\nError, paciente no existe en el sistema, ingresar otra cedula ");
                            scanf("%ld", &ced);
                        }
                        eliminarConCedula(ced, a);
                        // Ramiro poner borrar consulta
                        break;
                        case 4: printf("\nVolviendo al menu principal... \n");
                        break;
                    }
                }
        break;
        case 2: while (sele != 5) {
                menuListados (sele);
                fflush(stdin);
                    switch (sele) {
                        case 1: printf("\nListar todos los pacientes registrados en el sistema, ordenados por cedula de identidad de menor a mayor ");
                        listarPacientes(a);
                        printf("\n");
                        break;
                        case 2: printf("\nListar aquellos pacientes registrados en el sistema que aun no han realizado ninguna consulta al dentista ");
                        listarPacientesSinConsultas(a);
                        printf("\n");
                        break;
                        case 3: printf("\nDada la cedula que identifica a un paciente, listar todas sus consultas, ordenadas en forma cronologica inversa ");
                        // Ramiro
                        break;
                        case 4: printf("\nDada una fecha, listar todas las consultas realizadas a partir de dicha fecha "); // Ramiro?
                        break;
                        case 5: printf("\nVolviendo al menu principal...\n");
                        break;
                    }
                }
        break;
        case 3: while (selecci != 5) {
                menuConsultas(selecci);
                fflush(stdin);
                    switch (selecci) {
                        case 1: printf("\nDada una cantidad de consultas, obtener la cantidad de pacientes registrados en el sistema que han realizado al menos dicha cantidad de consultas hasta el momento ");
                        printf("\nIngrese cantidad de consultas: ");
                        scanf("%d", &cConsu);
                        printf("\nCantidad de pacientes con al menos ese numero de consultas: %d", obtenerPacientesConCantidadDeConsultas(a, cConsu));
                        printf("\n");
                        break;
                        case 2: printf("\nObtener la cantidad de consultas de cada tipo ");
                        break;
                        case 3: printf("\nDada una fecha, obtener la cantidad de consultas que fueron realizadas en dicha fecha: ");
                                cargarFecha(f);
                        break;
                        case 4: printf("\nObtener la cedula del paciente que ha realizado la mayor cantidad de consultas hasta el momento, junto con la cantidad de consultas correspondiente ");
                        break;
                        case 5: printf("\nVolviendo al menu principal...\n");
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
