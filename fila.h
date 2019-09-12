#define ERRO_FILA_VAZIA -1
#define ERRO_FILA_CHEIA -2

typedef struct {
    int *dados;
    int capacidade, num_ele;
    int inicio, fim;
}Fila;

//Cabeçalho das Funções
