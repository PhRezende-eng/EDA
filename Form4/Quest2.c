#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
celula *busca (celula *le, int x);
celula *busca_rec (celula *le, int x);

celula *busca (celula *le, int x){
    le = le -> prox;
    while (le != NULL)
    {
        if (le -> dado == x)
            return le;
        le = le -> prox;
    }
    return le;
}

celula *busca_rec(celula *le, int x){
    if (le == NULL)
        return le;
    else if (le -> dado == x)
        return le;
    else 
        busca_rec(le -> prox, x);
} 