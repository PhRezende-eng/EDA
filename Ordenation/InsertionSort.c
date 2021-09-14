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
    int list[6] = {7, 3, 2, 5, 4, 3};
    insertionSort(list, 6); //aqui o código ordena
    for (int i = 0; i < 6; i++)
        printf("%d\n", list[i]);
}