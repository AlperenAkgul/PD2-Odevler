#include <stdio.h>
#include <stdlib.h>

int main()
{
	int elemanSayisi;
	int *p;
	int enBuyuk;
	
	scanf("%d", &elemanSayisi);
	
	p = (int*)calloc(elemanSayisi, sizeof(int));
	
	for(int i= 0; i < elemanSayisi; i++)
	{	
		scanf("%d", (p + i));	
	}
	
	enBuyuk = *p;
	
	for(int i = 0; i < elemanSayisi; i++)
	{
		if(*(p + i) > enBuyuk)
		{
			enBuyuk = *(p + i);
		}
	}
	
	printf("%d", enBuyuk);	
	
	return 0;
}
