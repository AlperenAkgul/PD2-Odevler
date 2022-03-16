#include <stdio.h>  

int fun(int x)
{
	if (x == 0)
	{
		return 0;
	}
	
	fun(x / 2);
	printf("%d", x % 2);
}


int main()
{
	int sayi;

	printf("Onluk Tabaninda Olan Bir Sayi Giriniz... ");
	scanf("%d", &sayi);

	fun(sayi);

	return 0;

}
