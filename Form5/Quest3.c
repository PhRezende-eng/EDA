#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *desempilha(celula *p, int *y)
{
    if (p->prox != NULL)
    {
        celula *proximo = p->prox;
        *y = proximo->dado;
        p->prox = proximo->prox;
        free(proximo);
        return 1;
    }
    else
        return 0;
}

// int main()
// {
//     return 0;
// }