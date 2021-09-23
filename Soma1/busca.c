#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *v, int n, int x)
{
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;
        if (n < v[meio])
            fim = meio - 1;
        else if (x > v[meio])
            inicio = meio + 1;
        else
            return meio;
    }
    return -1;
}

int main()
{
    int *v;
    int *l;
    int n = 0;
    int m = 0;
    int index = 0;
    int entrada = 0;

    scanf("%d", &n);
    scanf("%d", &m);
    v = malloc(32 * 1000);
    l = malloc(32 * 1000);

    entrada = m + n + 1;
    while (index < n)
    {
        v[index] = n;
        index++;
    }

    //buscaBinaria(v, );

    return 0;
}