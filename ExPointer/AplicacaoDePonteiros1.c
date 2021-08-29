#include <stdio.h>
void troca1(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
    printf("x = %d, y = %d\n", *x , *y);
}

void troca2(int x, int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("x = %d, y = %d\n", x , y);
}

void teste(int x){
    x = 10; 
    printf("%d\n", x); //sempre irá printar 10
}

int main(){
    int x = 5;
    int y = 15;

    teste(x);
    printf("%d\n\n", x); // printa 5

    //troca2 NÃO aponta para o conteúdo de x e y
    troca2(x, y); // x == 15 e y == 5
    printf("x = %d, y = %d\n\n", x , y); // x e y, 5 e 15
    
    //troca1 aponta para o conteúdo de x e y
    troca1(&x,&y); //x == 15 e y == 5
    printf("x = %d, y = %d\n", x , y); // x e y vai passar a ser 15 e 5 por que eu estou alterado o conteúdo que aponta o endereço &x e &y

    return 0;
}