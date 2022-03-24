#include <stdio.h>

int fun(int x)
{
	if(x == 0)
	{
		return x;
	}
	fun(x - 1);
	printf("%d\n", x);
}

int main(){
	int n = 0;
	
	printf("N sayisini giriniz...");
	scanf("%d", &n);
	
	fun(n);
	
	return 0;
}


