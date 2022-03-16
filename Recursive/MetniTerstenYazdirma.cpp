#include <stdio.h>  

int ters() 
{
	char metin; 
	scanf("%c", &metin);  

	if (metin != '\n')
	{
		ters();  

		printf("%c", metin);
	}
}

int main()
{
	printf("Lütfen Metninizi Giriniz: \n");

	ters();

	return 0;
}
