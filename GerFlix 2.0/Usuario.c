#include <string.h>
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]= {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};


    int i;

    for(i=0; i<10; i++)
    {
        usuarios[i].idUsuario=id[i];
        //usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombres[i]);

    }

}

void mostrarListaUsuarios(eUsuario usuarios[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("%d---%s---%d\n", usuarios[i].idUsuario, usuarios[i].nombre, usuarios[i].idSerie);
        }

    }
    printf("\n");
}

