
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void mostrarListaSeries(eSerie series[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(series[i].estado==1)
        {
            printf("%d---%s---%s---%d\n", series[i].idSerie, series[i].nombre, series[i].genero,
                   series[i].cantidadTemporadas);
        }
    }
    printf("\n");
}

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int idSerie[5]= {100,101,102,103,104};
    int estado[5]= {1,1,1,1,1};
    char titulo[5][30]= {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]= {9,7,7,6,1};
    char genero[5][30]= {"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=idSerie[i];
        series[i].cantidadTemporadas=temporadas[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, titulo[i]);
        strcpy(series[i].genero, genero[i]);
    }
}




