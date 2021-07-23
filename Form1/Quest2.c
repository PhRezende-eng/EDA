#include <stdio.h>  //escrita e leitura
#include <stdlib.h> //auxiliar

int main()
{
    char length = 0;
    char digito;

    int i = 0;
    int index = 0;

    while (index == 0)
    {

        char lenght = scanf("%c", &digito);
        i++;
        if (lenght == '\n' || lenght == EOF)
        {
            index = 1;
        }
    }

    printf("%d\n", i);

    return 0;
}
