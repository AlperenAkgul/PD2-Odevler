#include <stdio.h>

void printVal(int *p){
	printf("%d\n", *p);
}

int main(){
	int i = 10;
	int *p = &i;
	
	printVal(++p);
	
	return 0;
}
