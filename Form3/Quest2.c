#include <stdio.h>
#include <stdlib.h>

void ordena(int *v, int n)
{
    int i = 0, j = 0, aux = 0;

    while (i < n)
    {
        aux = v[i];
        for (j = i; (j > 0) && (aux < v[j - 1]); j--)
        {
            v[j] = v[j - 1];
        }

        v[j] = aux;
        i++;
    };
}