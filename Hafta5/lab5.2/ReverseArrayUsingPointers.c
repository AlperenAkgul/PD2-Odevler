#include <stdio.h>

int main()
{
	int array[1000];
	int *p;
	int i, elemanSayisi;
	
	scanf("%d", &elemanSayisi);
	
	p = array;
	
	for(i = 0; i < elemanSayisi; i++){
		scanf("%d", &array[i]);
	}
	
	printf("\n");
	
	for(i = 0; (elemanSayisi - 1) >= 0; elemanSayisi--){
		printf("%d ", *(p + elemanSayisi - 1));
	}
	
	return 0;
}
