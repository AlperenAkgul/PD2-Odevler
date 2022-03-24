#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int i = 0, j = 0, n;
	
	ptr = (int*)malloc(sizeof(int));
	
	while(1)
	{
		scanf("%d", &n);
		
		if(n == 0)
		{
			break;
		}
		else
		{
			i++;
			realloc(ptr, sizeof(int) + i);
			*(ptr + (i - 1)) = n;
		}
	}
	
	for(j = 0; j < i; j++)
	{
		printf("%d ", *(ptr + j));
	}
		
	
	return 0;
}

