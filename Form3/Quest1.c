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
int main()
{
    int *v, *l, contador = 0, b = 0, n = 0;

    l = malloc(32 * 1000);
    while (scanf("%d", &n) != EOF)
    {
        l[contador] = n;
        contador++;
    }
    v = malloc(32 * sizeof(int));

    for (int i = 0; i < contador; i++)
        v[i] = l[i];

    insertionSort(v, contador); //aqui o código ordena
    for (int i = 0; i <= contador; i++)
        i != contador ? printf("%d ", v[i]) : printf("\n");

    return 0;
}