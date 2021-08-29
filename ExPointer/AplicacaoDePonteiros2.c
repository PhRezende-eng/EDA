#include <stdio.h>
#include <stdlib.h>

int *test1(){
    int *x = malloc (sizeof(int));
    *x = 5;
    printf("%d\n", *x);
    return x;
}

void test2(int *ptr){
    printf("%d\n", *ptr);
}


int main(){
    int *a;
    int n;

    a = test1();
    printf("%d\n", *a);
    
    test2(a);

    free(a);
    printf("%d\n", *a);


    return 0;
}
