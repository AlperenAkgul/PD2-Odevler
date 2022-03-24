#include <stdio.h>  

int topla(int dizi[], int x, int y)
{
	if (x >= y)
		return 0;
	else
		return (dizi[x] + topla(dizi, x + 1, y));
}



int main()
{
	int dizi[100];
	int i, N;
	int sonuc;

	printf("Dizinin Boyutunu Giriniz: ");
	scanf("%d", &N);


	for (i = 0; i < N; i++)
	{
		printf("%d. Elemani Giriniz: ", i + 1);
		scanf("%d", &dizi[i]);

	}

	sonuc = topla(dizi, 0, N);

	printf("Dizideki Elemanlarin Ortalamasi: %d", sonuc/N);

	return 0;

}
