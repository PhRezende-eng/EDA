#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void xFinal(char palavra[110], int posicao, char stringX[110], char stringNaoX[110]){
    char stringAux[2];

    if(palavra[posicao] == '\0'){
        strcat(stringNaoX, stringX);
    }

    if(palavra[posicao] == 'x'){
        stringAux[0] = palavra[posicao];
        stringAux[1] = '\0';
        strcat(stringX, stringAux);
        posicao += 1;
        xFinal(palavra, posicao, stringX, stringNaoX);
    } else {
        stringAux[0] = palavra[posicao];
        stringAux[1] = '\0';
        strcat(stringNaoX, stringAux);
        posicao += 1;
        xFinal(palavra, posicao, stringX, stringNaoX);
    }


}

int main()
{
    char palavra[110], posicao = 0;
    char stringX[110] = "", stringNaoX[110] = "";
    scanf("%s", &palavra);
    xFinal(palavra, posicao, stringX, stringNaoX);
    printf("%s\n", stringNaoX);
}