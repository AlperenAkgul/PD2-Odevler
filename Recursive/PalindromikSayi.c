#include <stdio.h>  

int palindrome(int sayi);
int tersinialma(int sayi);

int ters = 0;
int basamak;

int main()
{
	int sayi;

	printf("Lutfen bir tam sayi giriniz: ");
	scanf("%d", &sayi);

	if (palindrome(sayi) == 1)
	{
		printf("%d sayisi palindromik bir sayidir.\n", sayi);
	}
	else
	{
		printf("%d sayisi palindromik bir sayi degildir.\n", sayi);
	}
	return 0;
}

int palindrome(int sayi)
{
	if (sayi == tersinialma(sayi))
	{
		return 1;
	}

	return 0;

}

int tersinialma(int sayi)
{
	if (sayi)
	{
		basamak = sayi % 10;
		ters = ters * 10 + basamak;
		tersinialma(sayi / 10);
	}
	else
		return ters;
}
