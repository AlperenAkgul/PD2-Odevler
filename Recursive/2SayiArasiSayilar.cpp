#include <stdio.h>  

int fonk(int sayi1,int sayi2)
{	
	if (sayi2 >= sayi1)
	{
		printf("%d ", sayi1);

		fonk(sayi1 + 1, sayi2);
	}
	else
		return 0;

}

int main()
{
	int sayi1, sayi2;

	printf("Lütfen bir tam sayý giriniz (AltSýnýr): ");
	scanf("%d", &sayi1);

	printf("\nLütfen bir tam sayý giriniz (Üst Sýnýr): ");
	scanf("%d", &sayi2);

	printf("\n%d ve %d arasýndaki tam sayýlar: \n", sayi1, sayi2);
	
	printf("\n");

    fonk(sayi1, sayi2);
	
	return 0;
}
