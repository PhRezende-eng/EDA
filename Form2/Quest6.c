#include <stdio.h>
#include <stdlib.h>
long int fibonacci(int n)
{
    //iteracao
    if (n >= 1 && n <= 80)
    {
        long int atual = 1, anterior1 = 1, anterior2 = 1;

        for (int i = 3; i <= n; i++)
        {
            atual = anterior1 + anterior2;
            anterior2 = anterior1;
            anterior1 = atual;
        }
        printf("%ld\n", atual);
        return atual;
    }
}

int main()
{
    fibonacci(11);
    return 0;
}