#include <stdio.h>
#include <stdlib.h>

int pa_recursiva(int *v, int primeiro, int ultimo)
{
    int somaDosExtremos = v[primeiro] + v[ultimo];
    int somaDosProximos = v[primeiro + 1] + v[ultimo - 1];
 
    if (primeiro < ultimo)
    {
        if (somaDosExtremos == somaDosProximos)
            return pa_recursiva(v, primeiro + 1, ultimo - 1);
        else
            return 0;
    }
    else
        return 1;
}
// void main()
// {
//     int l[6] = {2, 4, 6, 8, 10, 12};
//     printf("%d\n", pa_recursiva(l, 2, 12));
// }