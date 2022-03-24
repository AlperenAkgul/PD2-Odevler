#include <stdio.h>  

int topla(int sayi1, int sayi2)
{
	if (sayi1 == sayi2)
	{
		return sayi1;
	}
	else
		return sayi1 + topla(sayi1 + 1, sayi2);
}

int main()
{
	int sayi1, sayi2;

	printf("AltSinir: ");
	scanf("%d", &sayi1);

	printf("\nUst Sinir: ");
	scanf("%d", &sayi2);

	printf("\n%d ve %d arasindaki tam sayilarin toplami: %d", sayi1, sayi2, topla(sayi1, sayi2));

	return 0;
}
