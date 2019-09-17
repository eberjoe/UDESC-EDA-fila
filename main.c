#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    Fila f;
    inicializa_fila(&f, 6);
    mostra_fila(f);
}
