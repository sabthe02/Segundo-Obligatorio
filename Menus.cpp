#include "Menus.h"

void menuPrincipal (int &seleccion) {
printf("\n MENU PRINCIPAL: Elija una opcion ingresando el numero: ");
    printf("\n 1. MENU ALTAS Y BAJAS");
    printf("\n 2. MENU LISTADOS");
    printf("\n 3. MENU CONSULTAS");
    printf("\n 4. Salir del programa");
    printf("\n");
    scanf("%d", &seleccion);
    while (seleccion !=1 && seleccion !=2 && seleccion !=3 && seleccion !=4) {
        printf("\nPor favor ingresar numero entre 1 y 5");
        printf("\n");
        scanf("%d", &seleccion);
    }
}

void menuAltasYBajas (int &seleccion) {
    printf("\n MENU DE ALTAS Y BAJAS: Elija una opcion ingresando el numero: ");
    printf("\n 1. Registrar alta de un paciente");
    printf("\n 2. Registrar nueva consulta de un paciente");
    printf("\n 3. Registrar baja de un paciente");
    printf("\n 4. Ir a menu principal");
    printf("\n");
    scanf("%d", &seleccion);
    while (seleccion !=1 && seleccion !=2 && seleccion !=3 && seleccion !=4) {
        printf("\nPor favor ingresar numero entre 1 y 4");
        printf("\n");
        scanf("%d", &seleccion);
    }
}

void menuListados (int &seleccion) {
    printf("\n MENU LISTADOS: Elija una opcion ingresando el numero: ");
    printf("\n 1. Listar todos los pacientes registrados en el sistema, ordenados por cedula de identidad de menor a mayor");
    printf("\n 2. Listar aquellos pacientes registrados en el sistema que aun no han realizado ninguna consulta al dentista");
    printf("\n 3. Dada la cedula que identifica a un paciente, listar todas sus consultas, ordenadas en forma cronologica inversa");
    printf("\n 4. Dada una fecha, listar todas las consultas realizadas a partir de dicha fecha");
    printf("\n 5. Volver al menu principal");
    printf("\n");
    scanf("%d", &seleccion);
            while (seleccion !=1 && seleccion !=2 && seleccion !=3 && seleccion !=4 && seleccion !=5) {
                    printf("\nPor favor ingresar numero entre 1 y 8");
                    printf("\n");
                    scanf("%d", &seleccion);
            }
}

void menuConsultas (int &seleccion) {
    printf("\n MENU CONSULTAS: Elija una opcion ingresando el numero: ");
    printf("\n 1. Dada una cantidad de consultas, obtener la cantidad de pacientes registrados en el sistema que han realizado al menos dicha cantidad de consultas hasta el momento");
    printf("\n 2. Obtener la cantidad de consultas de cada tipo");
    printf("\n 3. Dada una fecha, obtener la cantidad de consultas que fueron realizadas en dicha fecha");
    printf("\n 4. Obtener la cedula del paciente que ha realizado la mayor cantidad de consultas hasta el momento, junto con la cantidad de consultas correspondiente");
    printf("\n 5. Volver al menu principal");
    printf("\n");
    scanf("%d", &seleccion);
            while (seleccion !=1 && seleccion !=2 && seleccion !=3 && seleccion !=4 && seleccion !=5) {
                    printf("\nPor favor ingresar numero entre 1 y 8");
                    printf("\n");
                    scanf("%d", &seleccion);
            }
}


