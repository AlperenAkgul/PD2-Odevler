#include <stdio.h>   

int ters = 0;
int basamak;

int tersinialma(int sayi)
{
	if (sayi)
	{
		basamak = sayi % 10;
		ters = ters * 10 + basamak;
		tersinialma(sayi /10);
	}
	else
		return ters;
}

int main()
{
	int sayi;

	printf("L�tfen bir tam say� giriniz: ");
	scanf("%d", &sayi);

	printf("\nSay�n�n Tersi: %d", tersinialma(sayi));

	return 0;
}
