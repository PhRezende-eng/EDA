#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, list[5] = {4, 2, 3, 5, 9};
    int maior = list[0];
    printf("%d\n", maior);
    for (i = 1; i < 5; i++)
    {
        if (list[i] > maior)
            maior = list[i];
    }
    printf("%d\n", maior);
    return 0;
}