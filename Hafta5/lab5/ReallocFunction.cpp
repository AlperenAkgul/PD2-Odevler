#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int adHarfSayisi = 7;
	int soyadHarfSayisi = 6;
	int i;
	char *ptr, *ptr2;
	
	ptr = (char*)malloc(adHarfSayisi * sizeof(char));
	realloc(ptr, soyadHarfSayisi * sizeof(char));
	
	for(i = 0; i < (adHarfSayisi + soyadHarfSayisi); i++)
	{
		scanf("%c", (ptr + i));
	}
	
	printf("%s", ptr);
	
	return 0;
}
