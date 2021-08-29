#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *v;

    // v[5] = 10;
    scanf("%d", &n);
    v = malloc(n * sizeof(int)); // n inteiros
    scanf("%d", v+5);
    // scanf("%d", &v[5]);

    printf("v[5] = %d\n", v[5]);
    printf("v[5] = %d\n", *(v+5));
    printf("Tamanho do vetor %d\n", n);

    return 0;

}