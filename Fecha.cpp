#include "Fecha.h"
#include "Boolean.h"

void cargarFecha (fecha &f)
{
    boolean es = FALSE;
    while (!es) {
         printf("\nIngrese un numero entero para dia: ");
        scanf("%d", &f.dia);
        printf("\nIngrese un numero entero para mes: ");
        scanf("%d", &f.mes);
        printf("\nIngrese un numero entero para anio: ");
        scanf("%d", &f.anio);
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

boolean MenorFecha (fecha f1, fecha f2)
{
boolean menor = FALSE;

if (f1.anio < f2.anio)
menor = TRUE;
else
    {
    if (f1.anio == f2.anio)
    {if (f1.mes < f2.mes)
    menor = TRUE;
        else
        {
        if (f1.anio == f2.anio || f1.mes == f2.mes)
        {if (f1.dia < f2.dia)
        menor = TRUE;}
        }
}
}
return menor;
}






