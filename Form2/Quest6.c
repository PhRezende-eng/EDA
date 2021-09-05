#include <stdio.h>
#include <stdlib.h>

long int fibovetor[100];

long int fibonacci(int n)
{
    if (n <= 2)
        return 1;
    if (fibovetor[n] == 0)
        fibovetor[n] = fibonacci(n -1) + fibonacci(n - 2);
    long int result = fibovetor[n];
    return result;

    
}

int main()
{
    fibonacci(11);
    return 0;
}