#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int C = 0;
    int L = 0;
    int index = 0;
    int indexx = 0;

    scanf("%d", &C);
    scanf("%d", &L);

    if (C >= 1 && L <= 100)
    {
        while (index < C)
        {
            while (indexx <= L)
            {
                if (L == indexx)
                {
                    printf("\n");
                    break;
                }
                else
                {
                    printf("[%.3d,%.3d]", index, indexx); // adiciona 0 à esquerda
                    indexx++;
                }
            }
            indexx = 0;
            index++;
        }
    }

    return 0;
}
