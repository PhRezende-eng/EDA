#include <stdio.h>
#include <stdlib.h>
int f91(int n)
{
    if (n > 100)
        return n - 10;
    else
        return f91(f91(n + 11));
}

int main()
{
    int j;
    scanf("%d", &j);
    if (j == 0)
        return 0;
    else {
        f91(j);
        printf("f91(%d) = %d\n", j, f91(j));
    }
    main();
}