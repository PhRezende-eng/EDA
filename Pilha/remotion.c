#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *v;
    int topo;
    int N;
} pilha;

pilha *desempilha(pilha *p, int *y){
    if(p -> topo == 0)
        return 1;
    else
    {
        p -> topo --;
        *y = p -> v[p -> topo];
        return 0;
    }
    
}

int main(){
    return 0;
}