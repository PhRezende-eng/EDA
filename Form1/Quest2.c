#include <stdio.h>  //escrita e leitura
#include <stdlib.h> //auxiliar

int main()
{
    int digito;
    int numeroDeDigitos = 0;

    while (scanf("%d", &digito) != EOF)
    {
        numeroDeDigitos++;
    }

    printf("%d\n", numeroDeDigitos);

    return 0;
}
