#include "Consultas.h"

void Crear (Lista &L) {
    L = NULL;
}

boolean Vacia(Lista L) {
    boolean es = FALSE;
    if (L == NULL)
        es = TRUE;
    return es;
}


Consulta Primero(Lista L) {
    return L->info;
}


void Resto(Lista &L) {
    Lista aux = L;
    L = L->sig;
    delete aux;
}

void InsFront(Lista &L, Consulta e) {
    Lista aux = new nodo2;
    aux->info = e;
    aux->sig = L;
    L = aux;
}

/*
Consulta LargoIter(Lista L) {
    int cant = 0;
    while (L != NULL) {
        cant++;
        L = L->sig;
    }
    return cant;
}
*/

void DesplegarIter(Lista L)
{
    while (L != NULL)
    {
        desplegarConsulta (L->info);
        L = L->sig;
    }
}

/*
Consulta UltimoIter(Lista L) {
    while (L->sig != NULL)
        L = L->sig;
    return (L->info);
}

Consulta ContarIter(int e, Lista L) {
    int cant = 0;
    while (L != NULL) {
        if (L->info == e)
            cant++;
        L = L->sig;
    }
    return cant;
}

boolean PerteneceIter(Lista L, int e) {
    boolean esta = FALSE;
    while (L != NULL && !esta) {
        if (L->info == e)
            esta = TRUE;
        else
            L = L->sig;
    }
    return esta;
}

void SustituirIter(Lista &L, int e1, int e2) {
    Lista aux = L;
    while (aux != NULL) {
        if (aux->info == e1)
            aux->info = e2;
        aux = aux->sig;
    }
}

Consulta MaximoIter(Lista L) // Precondición: L no está vacía
{
    Consulta max = L->info;
    L = L->sig;
    while (L != NULL) {
        if (L->info > max)
            max = L->info;
        L = L->sig;
    }
    return max;
}

void ParesImparesIter(Lista L, Lista &P, Lista &I) {
    while (L != NULL) {
        if (L->info % 2 == 0)
            InsFront(P, L->info);
        else
            InsFront(I, L->info);
        L = L->sig;
    }
}
*/

void InsBackIter(Lista &L, Consulta c)
{
    Lista nuevo = new nodo2;
    nuevo->info = c;
    nuevo->sig = NULL;
    if (L == NULL)
        L = nuevo;
    else {
        Lista aux = L;
        while (aux->sig != NULL)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}


void registrarConsulta (Lista &L, Consulta c)
{
    boolean agregada = FALSE;

    Lista aux;
    Lista aux2;
    Lista aux3;

    if (L == NULL){
         InsFront(L, c);}

    else {

          aux2 = L;
          aux3 = L;

          aux = new nodo2;
          aux->info = c;

          while (aux2 != NULL && !agregada)
           {if (MenorFecha (seleccionarFecha (aux2->info), seleccionarFecha (aux->info)) == TRUE && MenorFecha (seleccionarFecha (L->info), seleccionarFecha (aux->info)) == TRUE)
                     {aux->sig = aux2;
                      aux2 = aux;
                      L = aux2;
                      agregada = TRUE;
                      }
            // insfront

            else if (MenorFecha (seleccionarFecha (aux2->info), seleccionarFecha (aux->info)) == TRUE && MenorFecha (seleccionarFecha (L->info), seleccionarFecha (aux->info)) == FALSE)
                  {L->sig = aux;
                   aux->sig = aux2;
                    agregada = TRUE;}

            else aux2 = aux2->sig;
           }

          if (agregada == FALSE)
            {

            while (aux3->sig != NULL)
            {aux3 = aux3->sig;}

            aux3->sig = new nodo2;
            aux3->sig->info = c;
            aux3->sig->sig = NULL;
            }

            //InsBackIter
        }
}

void cantidadConsultasportratamiento (Lista L, int &tratamiento, int &protesis, int &saludable)
{
    if (L != NULL)
    {
        switch (seleccionarEvaluacion (L->info))
        {
            case EN_TRATAMIENTO: tratamiento++;
            break;
            case NECESITA_PROTESIS: protesis++;
            break;
            case SALUDABLE: saludable++;
            break;
        }

        cantidadConsultasportratamiento (L->sig,tratamiento,protesis,saludable);
    }
}


int cantidadConsultasporfecha (Lista L, fecha f)
{
    if (L == NULL)
        return 0;
    else {
          if (darDia (seleccionarFecha (L->info)) == darDia (f) && darMes (seleccionarFecha (L->info)) == darMes (f) && darAnio (seleccionarFecha (L->info)) == darAnio (f))
          {return 1 + cantidadConsultasporfecha (L->sig, f);}
          else return cantidadConsultasporfecha (L->sig, f);
         }
}


void desplegarporcedula (Lista L, long int cedula)
{
    if (L != NULL)
    {
        if (seleccionarCedulaConsulta (L->info) == cedula)
        {
        desplegarConsulta (L->info);
        desplegarporcedula (L->sig, cedula);
        }
        else
            {desplegarporcedula (L->sig, cedula);}
    }
}


int ContarCedulas(long int e, Lista L) {
    int cant = 0;
    while (L != NULL) {
        if (seleccionarCedulaConsulta (L->info) == e)
            cant++;
        L = L->sig;
    }
    return cant;
}



void mayorcantidadconsultas (Lista L, long int &cedula, int &mayor)
{
    Lista aux = L;
    Lista aux2 = L;
    int conteo = 0;

    cedula = seleccionarCedulaConsulta (L->info);
    mayor = ContarCedulas (seleccionarCedulaConsulta (L->info) , aux);

    L = L->sig;

    while (L != NULL)
    {
     if (seleccionarCedulaConsulta (L->info) == cedula)
     {L = L->sig;}

     else
    {
     aux = aux2;

     conteo = ContarCedulas (seleccionarCedulaConsulta (L->info), aux);

     if (conteo > mayor)
     {
         cedula = seleccionarCedulaConsulta (L->info);
         mayor = conteo;
         L = L->sig;
     }
     else
     {
         L = L->sig;
     }


    }


}
}

void eliminarConsulta(Lista &L, long int cedula){
    if (L != NULL)
    {
        if (cedula == seleccionarCedulaConsulta(L->info))
        {
            Lista aux = L;
            L = L -> sig;
            delete aux;
            eliminarConsulta(L, cedula);
        }
        else
            eliminarConsulta(L -> sig, cedula);
    }

}

void desplegarConsultaPorFecha(Lista L, fecha f){
    if (L != NULL) {
        if (darDia(seleccionarFecha(L->info)) >= darDia(f) && darMes(seleccionarFecha(L->info)) >= darMes(f) &&
            darAnio(seleccionarFecha(L->info)) >= darAnio(f)){
            desplegarConsulta(L->info);
            desplegarConsultaPorFecha(L->sig, f);
        } else desplegarConsultaPorFecha(L->sig, f);
    }
}


/*
OPERACIONES DE ARCHIVOS


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

boolean ExisteConsultas (String nomArchConsultas)
{
boolean existeArchivo = TRUE;
FILE * f = fopen ("Consultas.txt", "rb");
if (f == NULL)
existeArchivo = FALSE;
else
fclose (f);
return existeArchivo;
}
*/
