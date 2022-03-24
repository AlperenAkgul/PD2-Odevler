#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int elemanSayisi = 14;
	char *ptr, *ptr2;
	int i;
	
	ptr = (char*)malloc(elemanSayisi * sizeof(char));
	ptr2 = (char*)malloc(elemanSayisi * sizeof(char));
	
	for(i = 0; i < elemanSayisi; i++)
	{
		scanf("%c", (ptr+i));
	}
	
	*(ptr + i) = '\0';
	
	printf("%s", ptr);
	
	strcpy(ptr2, ptr);
	
	printf("%s", ptr2);
	
	return 0;
}
