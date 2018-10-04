#include "Serie.h"
#include "Usuario.h"

typedef struct
{
    int idUsuario;
    int idSerie;
} eSeriesyUsuarios;

void mostrarUsuarioConSuSerie(eUsuario[], int, eSerie[], int);

void mostrarSerieConSusUsuarios(eSerie[], int, eUsuario[], int);

void mostrarUsuarioConSusSeries(eSerie[], int, eUsuario[], int);
