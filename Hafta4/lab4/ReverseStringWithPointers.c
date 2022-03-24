#include <stdio.h>

int main()
{
	char str[100];
	char *p;
	int i = 0, j;
	
	scanf("%s", &str);
	p = str;
	
	while(*(p + i) != '\0'){
		i++;
	}
	
	for(j = (i - 1); j >= 0; j--){
		printf("%c", *(p + j));
	}
	
	return 0;
}
