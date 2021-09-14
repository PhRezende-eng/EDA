#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *vetor, int N)
{
    int i, continua, aux, fim = N;

    while (continua != 0)
    {
        continua = 0;
        for (i = 0; i < fim - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                continua = i - 1;
            }
        }
        printf("%d\n", vetor[i]);
        fim--;
    };
}
// void main()
// {
//     int *list = {4, 5, 2, 3, 1};
//     bubblesort(*list, 5);
// }