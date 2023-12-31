#include "Menus.h"
#include "Consultorio.h"
#include "Consultas.h"
#include "Archivo.h"

int main()
{

int selec, selecc, sele, selecci, cConsu;
fecha fe;
paciente p;
ABB a;
long int ced;
Lista L;
Consulta c;
String nomArchConsultas = "Consultas.txt";
String nomArchPacientes = "Pacientes.txt";

int tratamiento,protesis,saludable;

long int lacedu;
int lamayor;

Crear(a);
Crear(L);
FILE *f, *f2;

if (ExisteArchivo (nomArchConsultas) == true)
{Levantar_Consultas(L, nomArchConsultas);}

if (ExisteArchivo (nomArchPacientes) == true)
{LevantarPacientes(a, nomArchPacientes);}

do
{
menuPrincipal (selec);
switch (selec)
{
    case 1: do
                {
                menuAltasYBajas (selecc);
                    switch (selecc)
                    {
                        case 1: printf("\nRegistrar alta de un paciente ");
                        cargarPaciente(p);
                        if (existe(a, seleccionarCedulaPaciente(p))) {
                            printf("\nError, paciente ya existe.");
                        }
                        else Insert(a, p);
                        break;
                        case 2: printf("\nRegistrar nueva consulta de un paciente ");
                        cargarConsulta(c);
                        registrarConsulta (L, c);
                        sumarConsultaAlABB (a, seleccionarCedulaConsulta (c));
                        break;

                        case 3: printf("\nRegistrar baja de un paciente ");
                        printf("\nIngrese cedula de un paciente para borrarlo del sistema: ");
                        scanf("%ld", &ced);
                        if (!existe(a, ced)) {
                            printf("\nError, paciente no existe en el sistema.");
                        } else {eliminarConCedula (ced, a);
                          printf("\nEliminado correctamente.");
                          eliminarConsulta (L, ced);
                          }
                        break;
                        case 4: printf("\nVolviendo al menu principal... \n");
                        break;
                        default: printf ("Opcion no valida. Ingrese otra");
                        break;
                    }
                }
                while (selecc != 4);
                //system("cls");
                break;

        case 2: do
                {
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

                                printf("\n\nIngrese cedula de un paciente ");
                                scanf("%ld", &ced);

                                if (!existe(a, ced))
                                {
                                printf("\nError, paciente no existe en el sistema. Registrelo primero ");
                                }else
                                desplegarporcedula (L,ced);
                        break;
                        case 4: printf("\nDada una fecha, listar todas las consultas realizadas a partir de dicha fecha ");
                        cargarFecha (fe);
                        desplegarConsultaPorFecha (L,fe);
                        break;
                        case 5: printf("\nVolviendo al menu principal...\n");
                        break;
                        default: printf ("Opcion no valida. Ingrese otra");
                        break;
                    }
                }
                while (sele != 5);
                //system("cls");
                break;

        case 3: do
                {
                menuConsultas(selecci);
                    switch (selecci)
                    {
                        case 1: printf("\nDada una cantidad de consultas, obtener la cantidad de pacientes registrados en el sistema que han realizado al menos dicha cantidad de consultas hasta el momento ");
                        printf("\nIngrese cantidad de consultas: ");
                        scanf("%d", &cConsu);
                        printf("\nCantidad de pacientes con al menos ese numero de consultas: %d", obtenerPacientesConCantidadDeConsultas(a, cConsu));
                        printf("\n");
                        break;
                        case 2: printf("\nLa cantidad de consultas de cada tipo son: ");
                                tratamiento = 0;
                                protesis = 0;
                                saludable = 0;
                                cantidadConsultasportratamiento (L, tratamiento,protesis,saludable);
                                printf ("\nEn tratamiento - %d / Protesis - %d / Saludable - %d\n",tratamiento,protesis,saludable);
                                printf("\n");
                        break;
                        case 3: printf("\nDada una fecha, obtener la cantidad de consultas que fueron realizadas en dicha fecha: ");
                                cargarFecha(fe);
                                printf ("La cantidad de consultas registradas para la fecha ingresada son: %d", cantidadConsultasporfecha (L,fe));
                                printf("\n");
                        break;
                        case 4: printf("\nObtener la cedula del paciente que ha realizado la mayor cantidad de consultas hasta el momento, junto con la cantidad de consultas correspondiente ");
                                mayorcantidadconsultas (L, lacedu, lamayor);
                                printf ("Cedula %ld - Cantidad consultas %d", lacedu, lamayor);
                                printf("\n");
                        break;
                        case 5: printf("\nVolviendo al menu principal...\n");
                        break;
                        default: printf ("Opcion no valida. Ingrese otra");
                        break;
                    }
                }
                while (selecci != 5);
                //system("cls");
                break;

        case 4: printf("\nSaliendo...");
        Bajar_Consultas(L, nomArchConsultas);
        f2 = fopen("Pacientes.txt", "wb");
        BajarPacientes(a, f2);
        fclose(f2);
        liberarArbol(a);
        liberarMemoriaLista(L);
        strdestruir(nomArchConsultas);
        strdestruir(nomArchPacientes);
        break;
        default: printf ("Opcion no valida. Ingrese otra");
        break;
}

} while (selec != 4);



}


