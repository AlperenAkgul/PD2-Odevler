#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *ptr1, *ptr2;
	int i = 0, j = 0;
	char n;
	
	ptr1 = (char*)malloc(sizeof(char));

	while((n = getchar()) != '\n')
	{
		*(ptr1 + i) = n;
		i++;
		realloc(ptr1, sizeof(char) * (i + 1));
	}
	
	*(ptr1 + i) = '\0';
	
	ptr2 = (char*)malloc(sizeof(char));
	
	while((n = getchar()) != '\n')
	{
		*(ptr2 + j) = n;
		j++;
		realloc(ptr2, sizeof(char) * (j + 1));
	}
	
	*(ptr2 + j) = '\0';
	
	printf("%s %s\n%d", ptr1, ptr2, strlen(ptr1));
	
	return 0;
}
