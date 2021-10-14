#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *v;
    int topo;
    int N;
} pilha;

void destroi_pilha(pilha *p){
    free(p -> v);
}

int main(){
    return 0;
}