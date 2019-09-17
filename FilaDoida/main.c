#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila f;
    inicializa_fila(&f, 6);
    mostra_fila(f);

    inserir(&f, 4);
    mostra_fila(f);

    inserir(&f, 6);
    mostra_fila(f);

    return 0;
}
