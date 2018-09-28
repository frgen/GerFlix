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

