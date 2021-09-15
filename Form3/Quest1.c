#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *vetor, int N)
{
    int i = 0, j = 0, aux = 0;

    while (i < N)
    {
        aux = vetor[i];
        for (j = i; (j > 0) && (aux < vetor[j - 1]); j--)
        {
            vetor[j] = vetor[j - 1];
        }

        vetor[j] = aux;
        i++;
    };
}
void main()
{
    int *v, *l, contador = 0, b = 0, n;

    while (scanf("%d", &n) != EOF)
    {
        l[contador] = n;
        contador++;
    }
    v = malloc(contador * sizeof(int));
    for (int i = 0; i < contador; i++)
        v[i] = l[i];

    insertionSort(v, contador); //aqui o código ordena
    for (int i = 0; i <= contador; i++)
        i != contador ? printf("%d ", v[i]) : printf("\n");

    free(v);
}