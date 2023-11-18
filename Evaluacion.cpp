#include "Evaluacion.h"

void desplegarEvaluacion (Evaluacion e) {
switch (e) {
    case EN_TRATAMIENTO: printf("En tratamiento ");
    break;
    case NECESITA_PROTESIS: printf("Necesita protesis ");
    break;
    case SALUDABLE: printf("Saludable ");
    break;
}
}

void cargarEvaluacion (Evaluacion &e) {
int a;

while (a != 1 && a!= 2 && a != 3) {
    printf("\nIngrese tipo de evaluacion: 1 - En tratamiento, 2 - Necesita protesis, 3 - Saludable");
    scanf("%d", &a);

    switch(a) {
        case 1: e = EN_TRATAMIENTO;
        break;
        case 2: e = NECESITA_PROTESIS;
        break;
        case 3: e = SALUDABLE;
        break;
        default: printf("\nError, ingrese numero 1 a 3");
    }
}

}
Evaluacion seleccionarEvaluacion (Evaluacion e) {

return e;

}
