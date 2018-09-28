#include "UsuariosySeries.h"

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int tamU, eSerie series[], int tamS)
{
    int i;

    for(i=0; i<tamU; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("UYS %d---%s---%d---%s\n", usuarios[i].idUsuario, usuarios[i].nombre, usuarios[i].estado,
               series[i].nombre);
        }
    }
}
