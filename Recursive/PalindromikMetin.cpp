#include <stdio.h>  
#define SIZE 100

int uzunlukbulma(char metin[])
{
	int i = 0;
	while (1)
	{
		if (metin[i] == '\0')
		{
			break;
		}
		i++;
	}
	return i;
}
int palindrome(char metin[], int uzunluk)
{
	if (uzunluk <= 0)
	{
		return 1;
	}
	else if (metin[0] == metin[uzunluk - 1])
	{
		return palindrome(metin + 1, uzunluk - 2);
	}
	else
	{
		return 0;

	}
}

int main()
{
	char metin[SIZE];

	printf("Metin giriniz: ");
	gets(metin);  

	int uzunluk = uzunlukbulma(metin);
	int sonuc = palindrome(metin, uzunluk);

	if (sonuc == 1)
	{
		printf("\n '%s' ifadesi palindromdur\n", metin);
	}
	else if (sonuc == 0)
	{
		printf("\n '%s' ifadesi polindrom degildir.\n", metin);
	}
}
