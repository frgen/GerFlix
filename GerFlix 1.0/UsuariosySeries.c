#include "UsuariosySeries.h"

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int tamU, eSerie series[], int tamS)
{
    int i, j;

    for(i=0; i<tamU; i++)
    {
        if(usuarios[i].estado==1)
        {
            j=usuarios[i].idSerie-100;
            printf("UYS %d---%s---%s\n", usuarios[i].idUsuario, usuarios[i].nombre, series[j].nombre);
        }
    }
}
