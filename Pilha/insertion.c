#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *v;
    int topo;
    int N;
} pilha;

int empilha(pilha *p, int x){
    if(p -> topo == p -> N){
        p -> v = realloc(p -> v, 2* p-> N + sizeof(int));
        if(p -> v == NULL)
            return 1;
        p -> N += 2;
    }
    p -> v[p -> topo] = x;
    p -> topo++;
    return 0;
}

int main(){
    return 0;
}