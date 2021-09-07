#include <stdio.h>
#define longInt long int

longInt count7(longInt n, longInt x, int y)
{
	y = n%10;
	if (n < 1)
		printf("%ld\n", x);
	
	if (y == 7 && n > 0){
		n = n/10;
		x = x + 1;
		count7(n, x, y);
	} else if (n >= 1 && y != 7){
		n = n/10;
		count7(n, x, y);
	}
}

int main()
{
	int y = 0;
	longInt x = 0;
	longInt n;
	scanf("%ld", &n);
	count7(n, x, y);
	return 0;
}