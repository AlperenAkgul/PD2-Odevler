#include <stdio.h>

enum day{
	a,b,c = 5,d,e
};

int main()
{
	printf("Enter the value for a");
	scanf("%d", a);
	
	printf("%d", a);
	
	return 0;
}

//enum ilk degerden sonra tekrar deger alamaz
