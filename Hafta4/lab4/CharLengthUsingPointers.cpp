#include <stdio.h>

int main()
{
	char str[100];
	char *p;
	int i = 0;

	p = str;
		
	scanf("%s", &str);
	
	while(*(p + i) != '\0'){
		i++;
	}
	
	printf("%d", i);
	
	return 0;
}
