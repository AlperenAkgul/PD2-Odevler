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

	printf("Lutfen Bir Tamsayi Giriniz: ");
	scanf("%d", &sayi);

	printf("\nSayinin Tersi: %d", tersinialma(sayi));

	return 0;
}
