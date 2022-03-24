#include <stdio.h>

int main()
{
	
	int var = 10;
	int *p;
	p = &var;
	
	printf("Address of var is: %p", &var);
	printf("\nAddress of var is: %p", p);
	
	printf("\nValue of var is: %d", var);
	printf("\nValue of var is: %d", *p);
	printf("\nValue of var is: %d", *(&var));
	
	printf("\nValue of pointer p is: %p", p);
	printf("\nAddress of pointer p is: %p", &p);
	
	return 0;
}
