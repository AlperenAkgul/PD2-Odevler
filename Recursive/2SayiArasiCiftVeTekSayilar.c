#include <stdio.h>  

int fonk(int sayi1,int sayi2)
{
	if (sayi2 >= sayi1)
	{
		if (sayi1 % 2 != 0)
		{	
			printf("Tek : %d\n", sayi1);
			return fonk(sayi1 + 1, sayi2);
		}
		else if (sayi1 % 2 == 0)
		{	
			printf("Cift: %d\n", sayi1);
			return fonk(sayi1 + 1, sayi2);
		}
	}
	else
		return 0;
}

int main()
{
	int sayi1, sayi2;

	printf("AltSinir: ");
	scanf("%d", &sayi1);

	printf("\nUst Sinir: ");
	scanf("%d", &sayi2);

	fonk(sayi1 + 1, sayi2);

	return 0;
}
