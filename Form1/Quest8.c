#include <stdio.h>

int main()
{
    char texto[10001];
    char palavraDesejadaNoTexto[41];
    char palavratrocada[41];
    int textoComPalavraTrocada = 0;
    int index = 0;

    fgets(texto, 1001, stdin);
    scanf("%s", palavraDesejadaNoTexto);
    scanf("%s", palavratrocada);

    textoComPalavraTrocada = 0;

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

    if (textoComPalavraTrocada > 0 && palavraDesejadaNoTexto[textoComPalavraTrocada] == 0)
    {
        printf("%s", palavratrocada);
        textoComPalavraTrocada = 0;
    }
   

    return 0;
}