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

	printf("L�tfen bir tam say� giriniz (AltS�n�r): ");
	scanf("%d", &sayi1);

	printf("\nL�tfen bir tam say� giriniz (�st S�n�r): ");
	scanf("%d", &sayi2);

	printf("\n%d ve %d aras�ndaki tam say�lar: \n", sayi1, sayi2);
	
	printf("\n");

    fonk(sayi1, sayi2);
	
	return 0;
}
