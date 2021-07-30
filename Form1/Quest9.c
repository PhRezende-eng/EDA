
#include<stdio.h>
#include<stdlib.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double variacao = tB - tA;
    double horaSeg = variacao/3600.0;
    double velocidadeMedia = distancia/horaSeg;
    return velocidadeMedia;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double velocidadeAtual = calculaVelocidadeMedia(tA,tB,distancia);

    if (velocidadeAtual <= velocidadeMaxima)
    {   
        return 0;
    } else
    {   
        return 1;
    }
    
    
}

int main()
{
    calculaVelocidadeMedia(54169,57346,170.0);
    printf("%f\n",calculaVelocidadeMedia(54169,57346,170.0));
    levouMulta(54169,57346,170.0,120.0);
    printf("%d\n",levouMulta(54169,57346,170.0,120.0));

    return 0;
}
