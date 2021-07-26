#include <stdio.h>  //escrita e leitura
#include <stdlib.h> //auxiliar
#include <string.h> //biblioteca de leituras

int main()
{
    char numeroDeEntrada = 0;
    char texto[256];
    double porcentagem = 0;
    int index = 0;
    int lidoNaPalavra = 0;

    scanf("%c\n", &numeroDeEntrada);

    fgets(texto, 256, stdin);

    for (int i = 0; i <= strlen(texto); i++)
    {
        if (i == 999 || (texto[i] == 32 && texto[i + 1] == 32))
        {
            porcentagem = 101;
            break;
        }
        else if ((texto[i] == numeroDeEntrada) && (lidoNaPalavra == 0))
        {
            porcentagem++;
            lidoNaPalavra = 1;
        }
        else if (texto[i] == 32 || texto[i] == 0)
        {
            lidoNaPalavra = 0;
            index++;
        }
    }

    if (porcentagem == 0)
    {
        printf("0.0\n");
    }
    else if (porcentagem > 0 && porcentagem <= 100)
    {
        porcentagem = 100 / (index / porcentagem);
        printf("%.1f\n", porcentagem);
    }
    else 
    {
        printf("\n");
    }
    // scanf("%c", &texto); // ler uma palavra
    // scanf("%[^\n]", texto); //pra ler um texto não precisa do "&""
    // printf("%s\n", texto);
    // fgets(texto, 256, stdin); //cria a variável, diz o tamanho dela e faz o scanf do text
    // strlen(texto) // ler o lengt da variável
    return 0;
}
