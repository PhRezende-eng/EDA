#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int C = 0;
    int L = 0;
    int indexC = 0;
    int indexL = 0;

    scanf("%d", &C);
    scanf("%d", &L);

    if (C >= 1 && L <= 100)
    {
        while (indexC < C)
        {
            while (indexL <= L)
            {
                if (L == indexL)
                {
                    printf("\n");
                    break;
                }
                else
                {
                    printf("[%.3d,%.3d]", indexC, indexL); // adiciona 0 à esquerda
                    indexL++;
                }
            }
            indexL = 0;
            indexC++;
        }
    }

    return 0;
}
