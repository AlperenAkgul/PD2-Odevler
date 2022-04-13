#include <stdio.h>

enum sanfoundry{
	a = 1, b
};

enum sanfoundry1{
	c, d
};

int main()
{
	enum sanfoundry1 s1 = c;
	enum sanfoundry1 s = a;
	enum sanfoundry s2 = d;
	
	printf("%d", s);
	printf("%d", s1);
	printf("%d", s2);
	
	return 0;
}
