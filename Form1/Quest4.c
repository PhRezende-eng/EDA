#include <stdio.h>  //escrita e leitura
#include <stdlib.h> //auxiliar

int main()
{
    int L;
    int R;
    int D;

    scanf("%d %d %d", &L, &R, &D);

    if ((R > 50) && (L < R) && (R > D))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
