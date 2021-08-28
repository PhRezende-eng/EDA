#include <stdio.h>
#include <string.h>
int main(){
    int x = 5;
    int *ptr;

    printf("Endereço que ptr aponta: %p\n", ptr); //ainda nada foi alocado,nill 
    ptr = &x; //ptr recebe o apontamento de endereço de x
    printf("Endereço que ptr aponta: %p\n", ptr); // apontamento de endereço que recebeu de x

    printf("Conteúdo de *ptr: %d\n", *ptr); // printa o conteúdo armazenado dentro da memória que aponta endereço de x
    *ptr += 1;
    printf("Conteúdo de *ptr: %d\n", *ptr); // aqui diz que é alterado o conteúdo que aponta ptr, que no caso é o x e que o conteúdo é 5 ----- 6
    printf("Conteúdo de x: %d\n", x); // 6
    return 0;
}