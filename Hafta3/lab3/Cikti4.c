#include <stdio.h>

void my_recursive_function(int n){
	if(n == 0)
		return;
	printf("%d\n", n);
	my_recursive_function(n - 1);
}

int main(){
	my_recursive_function(7);
}
