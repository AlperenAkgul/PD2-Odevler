#include <stdio.h>

enum sanfoundry{
	a, b, c
};

enum sanfoundry g;

int main()
{
	g++;
	
	printf("%d", g);
	
	return 0;
}
