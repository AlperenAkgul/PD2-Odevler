#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	int *p1, *p2;
	
	scanf("%d", &sayi1);
	scanf("%d", &sayi2);
	
	p1 = &sayi1;
	p2 = &sayi2;
	
	printf("%d", *p1 + *p2);
	
	
}
