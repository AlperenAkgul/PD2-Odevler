#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr, elemanSayisi, i, artiElemanSayisi, j;
	
	printf("Dizi eleman sayisini giriniz ");
	scanf("%d", &elemanSayisi);
	
	ptr = (int*)malloc(elemanSayisi * sizeof(int));
	
	for(i = 0; i < elemanSayisi; i++)
	{
		scanf("%d", (ptr + i));
	}
	
	printf("Arttirilacak eleman sayisini giriniz ");
	scanf("%d", &artiElemanSayisi);
	
	realloc(ptr, artiElemanSayisi * sizeof(int));
	
	for(j = i; j < (elemanSayisi + artiElemanSayisi); j++)
	{
		scanf("%d", (ptr + j));
	}
	
	for(i = 0; i < (elemanSayisi + artiElemanSayisi); i++)
	{
		printf("%d ", *(ptr + i));
	}
	
	return 0;
}
