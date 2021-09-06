#include <stdio.h>
#include <stdlib.h>

long int vetor[100];
long int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        // n == 1 ? printf("1\n") : printf("1\n1\n");
        return 1;
    }
    if (vetor[n] == 0)
    {
        vetor[n] = fibonacci(n - 2) + fibonacci(n - 1);
    }

    // printf("%ld\n", vetor[n]);
    return vetor[n];
}
// int main(){
//     fibonacci(11);
// return 0;
// }