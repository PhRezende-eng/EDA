#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *v;
    int topo;
    int N;
} pilha;

pilha *cria_pilha(){
    pilha *p = malloc(sizeof(pilha));
    p ->N = 10;
    p ->v = malloc(p->N + sizeof(int));
    p ->topo = 0; // top é a primeira posição vazia
    return p;
}

int main(){
    return 0;
}