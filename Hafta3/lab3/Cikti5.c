#include <stdio.h>

void fun(int n){
	if(n == 0)
		return;
	
	fun(n/2);
	printf("%d", n%2);
}

int main(){
	fun(25);
}
