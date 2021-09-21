#include <stdio.h>
#include <stdlib.h>

int pa_recursiva(int *v, int primeiro, int ultimo)
{
    int somaDosExtremos = 0;
    int i = primeiro + 1;
    int j = ultimo - 1;

    v = malloc(32 * 1000);
      
    if (i < j)
    {   
        return pa_recursiva(v, i, j);
    }
    else 
        return -1;

}
// void main()
// {
//     int l[0];
//     pa_recursiva(l, 4, 76);
// }