#include "UsuariosySeries.h"

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int tamU, eSerie series[], int tamS)
{
    int i, j;

    for(i=0; i<tamU; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("%s----", usuarios[i].nombre);
            for(j=0; j<tamS; j++)
            {
                if(usuarios[i].idSerie == series[j].idSerie)
                {
                    printf("%s", series[j].nombre);
                    break;
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

void mostrarSerieConSusUsuarios(eSerie series[], int tamS, eUsuario usuarios[], int tamU)
{
    int i, j;

    for(i=0; i<tamS; i++)
    {
        if(series[i].estado==1)
        {
            printf("%s----", series[i].nombre);
            for(j=0; j<tamU; j++)
            {
                if(series[i].idSerie == usuarios[j].idSerie)
                {
                    printf("%s ", usuarios[j].nombre);
                }
            }
            printf("\n");
        }
    }
}

/*void mostrarUsuarioConSusSeries(eUsuario usuarios[], int tamU, eSerie series[], int tamS)
{
    int clientes[20] = {1,1,1,2,2,3,4,4,5,5,5,7,8,8,8,9,10,10,10,10};
    int seriesV[20]= {101,102,103,104,103,101,101,102,104,101,101,101,101,102,103,102,101,103,102,104};

    int i, j;

    for(i=0; i<tamU; i++) //cuenta los usuarios
    {
        if(usuarios[i].estado==1) // ejecuta solo si hay usuario (evita mostrar basura)
        {
            printf("%s----", usuarios[i].nombre);
            for(j=0; j<tamS; j++) // cuenta las series
            {
                if(usuarios[i].idSerie == series[j].idSerie) // ejecuta solo si hay serie (evita mostrar basura)
                {
                    printf("%s", series[j].nombre);
                    break;
                }
            }
            printf("\n");
        }
    }
    printf("\n");

}*/

/*
1.usuarios
alta
baja
modificacion

2.series
alta
baja
modificacion

3.elegir serie (alta U-S)

4.Dejar de ver serie (baja U-S)

5.Listar
a.usuarios
b.series
c.usuarios con sus series
d.cada serie con sus usuarios
e.todos los usuarios que ven una serie ingresada por teclado
f.la serie menos popular
*/
