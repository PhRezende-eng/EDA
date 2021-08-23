#include <stdio.h>
#include <string.h>

int main()
{
    char texto[10000];
    char palavraDesejadaNoTexto[40];
    char palavratrocada[40];
    int textoComPalavraTrocada = 0;
    int index = 0;

    scanf("%[^\n]", texto);
    scanf("%s", palavraDesejadaNoTexto);
    scanf("%s", palavratrocada);

    while (texto[index] != 0)
    {
        if (palavraDesejadaNoTexto[textoComPalavraTrocada] == texto[index])
        {
            textoComPalavraTrocada++;
        }
        else
        {
            if (textoComPalavraTrocada > 0)
            {
                if (palavraDesejadaNoTexto[textoComPalavraTrocada] == 0 && texto[index] == 32)
                {
                    printf("%s", palavratrocada);
                    textoComPalavraTrocada = 0;
                }
                else
                {
                    while (textoComPalavraTrocada > 0)
                    {
                        printf("%c", texto[index - textoComPalavraTrocada]);
                        textoComPalavraTrocada--;
                    }
                }
            }
            printf("%c", texto[index]);
        }
        index++;
    }

    if ( palavraDesejadaNoTexto[textoComPalavraTrocada] == 0 && textoComPalavraTrocada > 0)
    {
        printf("%s", palavratrocada);
        textoComPalavraTrocada = 0;
    }

    printf("\n");

    return 0;
}
