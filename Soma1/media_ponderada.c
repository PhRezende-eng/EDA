#include <stdio.h>
#include <stdlib.h>

int main() {
    double N, peso, guardaValor;
    int contador, index = 0;
    scanf("%d", &contador);
    while (index < contador )
    {
        scanf("%lf", &N);
        scanf("%lf", &peso);
        guardaValor += N * peso;
        index++;
    }
    
    printf("%.1lf\n", guardaValor);
    return 0;
}