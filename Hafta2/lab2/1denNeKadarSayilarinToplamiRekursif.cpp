#include <stdio.h>

int sum(int n){
	if (n == 1){
		return 1;
	}
	else{
		return (n + sum(n-1));
	}
}

int main(){
	int n = 10;
	printf("%d", sum(n));
	return 0;
}
