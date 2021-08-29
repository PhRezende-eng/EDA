#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return a > b;
}

int menor(int a, int b){
    return a < b;
}

int minmax(int n, int *v, int (*compara) (int a, int b)){
    int elem = v[0];
    for(int i = 1; i < n; i++)
        if ((*compara) (v[i], elem))
            elem = v[i];
    return elem;
}

int main(){
    int v[5] = {0 , 10 , -6, 12 , -15};
    printf("%d\n", minmax(5,v,maior));
    printf("%d\n", minmax(5,v,menor));
    return 0;
}