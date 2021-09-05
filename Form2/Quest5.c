#include <stdio.h>
#define li long int

li count7(li n, li count, int ver){
    
	ver = n % 10;
	
	if(n == 0)
    printf("%ld\n", count);
   if (ver == 7 && n > 0)
	{
		n = n/ 10;
		count = count + 1;
		count7(n, count, ver);
	}
	else if (ver != 7 && n > 0)
	{
		n = n/10;
		count7(n, count, ver);
	}
}	

int main(){
	li n ;
	li count = 0;	
	int verifica = 0;
	scanf("%ld", &n);
	count7(n, count,verifica);

return 0;
}