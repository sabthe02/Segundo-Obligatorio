#include "Fecha.h"
#include "Boolean.h"

void cargarFecha (fecha &f)
{
    boolean es = FALSE;
    while (!es) {
        printf("\nIngrese un numero entero para dia, mes y anio de ingreso: ");
        scanf("%d %d %d", &f.dia, &f.mes, &f.anio);
        es = validarFecha(f);
        if (!es) {
            printf("\nPor favor ingresar fecha valida");
        }
    }
}

void desplegarFecha(fecha f) {
printf("%d %d %d", f.dia, f.mes, f.anio);

}

int darDia (fecha f) {

return f.dia;
}

int darMes(fecha f) {

return f.mes;
}

int darAnio(fecha f) {
return f.anio;

}

boolean validarFecha (fecha f) {
boolean esValida;

    switch(f.mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (f.dia >=1 && f.dia <=31 ) {
                esValida = TRUE;
                }
                else {
                esValida = FALSE;
                }
                break;
        case 4: case 6: case 9: case 11:
                if (f.dia >=1 && f.dia <=30 ) {
                esValida = TRUE;
                }
                else {
                esValida = FALSE;
                }
                break;
        case 2:
                if (f.anio %4==0) {
                    if (f.dia >=1 && f.dia <=29 ) {
                    esValida = TRUE;
                    }
                    else {
                    esValida = FALSE;
                    }
                }
                    else {
                        if (f.dia >=1 && f.dia <=28 ) {
                        esValida = TRUE;
                        }
                        else {
                        esValida = FALSE;
                        }
                    }
                break;
    }

return esValida;

}







