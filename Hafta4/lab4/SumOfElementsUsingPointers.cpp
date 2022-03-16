#include <stdio.h>

int main()
{
	int array[1000];
	int *p;
	int i, n;
	int toplam = 0;
	
	scanf("%d", &n);
	
	p = array;
	
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < n; i++){
		toplam += *(p + i);
	}
	
	printf("%d", toplam);
	
	return 0;
}
