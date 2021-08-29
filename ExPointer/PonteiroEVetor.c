#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *v;


    // v[5] = 10;
    scanf("%d", &n);
    v = malloc(n * sizeof(int));
    scanf("%d", v+5); // v[5] == n
    // scanf("%d", &v[5]);

    printf("v[5] = %d\n", v[5]);
    printf("v[5] = %d\n", *(v+5));

    return 0;

}