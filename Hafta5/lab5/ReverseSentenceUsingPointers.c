#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[1000];
	char *ptr, *ptr2;
	int n, i, j, k = 0;
	int kelime = 1;
	
 	gets(a);
	
	for(n = 0; a[n] != '\0'; n++);
	
	ptr = (char*)malloc(n * sizeof(char));
	ptr2 = (char*)malloc(n * sizeof(char));

	ptr = a;
	
	for(i = n - 1; i >= 0; i--)
	{
		if(*(ptr + i) == ' ' || i == 0){
			if(k != 0)
			{
				*(ptr2 + k) = ' ';
				k++;
			}
			for(j = i; j < n; j++)
			{
				if(*(ptr + j) == ' ' && i != j || *(ptr + j) == '\0')
				{
					break;
				}
				if(*(ptr + j) == ' ')
				{
					j += 1; 
				}
				
				*(ptr2 + k) = *(ptr + j);
				k += 1;
			}
		}	
	}
	
	printf("%s", ptr2);
	
	return 0;
}
