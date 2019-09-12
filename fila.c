#include "fila.h"
#include <stdlib.h>
#include <stddio.h>

void inicializa_fila(Fila *p, int c) {
    p->dados = malloc(sizeof(int) * c);
    p->capacidade = c;
    p->inicio = p->fim = p->num_ele = 0;
}

int fila_vazia(fila f) {
    return f.num_ele == 0;
}

int fila_cheia(fila f) {
    return f.num_ele == f.capacidade;
}

int inserir(Fila *p, int info) {
    if (fila_cheia(*p))
        return ERRO_FILA_CHEIA;
    p->num_ele++;
    p->dados[p->fim] = info;
    p->fim = (p->fim + 1) % p->capacidade; // incremento circular
    return 1; //sucesso
}

int remover(Fila *p, int *info) {
    if (fila_vazia(*p))
        return ERRO_FILA_VAZIA;
    p->num_ele--;
    *info = p->dados[p->inicio];
    p->inicio = (p->inicio + 1) % p->capacidade; // incremento circular
    return 1; // sucesso
}
