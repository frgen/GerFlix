#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

void mostrarMenu(void)
{
    char opcion;

    do
    {
        printf("1.USUARIOS\n2.SERIES\n3.ELEGIR SERIE\n4.BAJA DE SERIE\n5.LISTAR\n6.SALIR\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
        case '1':
            printf("ABM usuarios\n");
            break;
        case '2':
            printf("ABM series\n");
            break;
        case '3':
            printf("Eleccion de serie\n");
            break;
        case '4':
            printf("Cancelacion de serie\n");
            break;
        case '5':
            printf("Listado completo\n");
            break;
        case '6':
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion incorrecta\n");
        }

    }
    while(opcion!='6');

}
