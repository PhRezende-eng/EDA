#include <stdio.h>
#include <stdlib.h>

int fibonacciRecursao(int n){
    //recursão
    if(n <= 2)
        return 1;
    else
        return fibonacciRecursao(n-1) + fibonacciRecursao(n-2);
}

long int fibonacciIterativo(int n){
    //iteracao
    long int atual = 1, anterior1 = 1, anterior2 = 1;
    
    for(int i = 3; i <= n; i++) {
        atual = anterior1 + anterior2;
        anterior2 = anterior1;
        anterior1 = atual;
    }
    
    return atual;
}

int main(){
    int n;
    
    printf("Qual elemento da serie deseja ver? ");
    scanf("%d", &n);
    printf("F(%d) = %ld\n", n, fibonacciIterativo(n));
    return 0;
}