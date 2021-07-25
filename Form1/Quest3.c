#include <stdio.h>  //escrita e leitura
#include <stdlib.h> //auxiliar

int main()
{
    int primeiroNumeroLido;
    int numeroDigitado;
    int index = 0;
    int soma = 0;

    scanf("%d", &primeiroNumeroLido);

    while (index < primeiroNumeroLido)
    {
        scanf("%d", &numeroDigitado);
        soma += numeroDigitado;
        index++;
    }

    printf("%d\n", soma);

    return 0;
}
