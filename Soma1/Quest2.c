#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {4, 7, 3, 10, 12};
    printf("%d\n", *v); //primeira posição
    printf("%ls\n", v + 3); //endereço de memória + 3
    printf("%d\n", *v + 3); //primeira posição + 3
    printf("%d\n", *(v + 3)); //terceira posição
    printf("%d\n", v[0 + 3]); //terceira posição
    return 0;
}