#include <stdio.h>
#include <stdlib.h>

void fun(int n, int *even, char *odd)
{
	int i = 0, j = 0, m, k, l;
	
	while(n != 0)
	{
		m = n % 10;
		
		if(m % 2 == 0)
		{
			*(even + i) = (char)(m + 48);
			i++;
			realloc(even, sizeof(char) * i);	
		}
		else
		{
			*(odd + j) = m;
			j++;
			realloc(odd, sizeof(int) * j);	
		}
		n = n / 10;
	}
	for(k = (i - 1); k >= 0; k--)
		printf("%c", *(even + k));
		
	printf("\n");
		
	for(l = (j - 1); l >= 0; l--)
		printf("%d", *(odd + l));
		
}

int main()
{
	int ogrenciNo, *ptr1;
	char *ptr2;
	
	ptr1 = (int*)malloc(sizeof(int));
	ptr2 = (char*)malloc(sizeof(char));
	
	scanf("%d", &ogrenciNo);
	
	fun(ogrenciNo, ptr1, ptr2);
	
	return 0;
}
