#include <stdio.h>

int fun(int x){
	if(x == 0){
		return x;
	}
	else{
		return x + fun(x-1);
	}
}

int main(){
	int n;
	
	printf("N sayisini giriniz...");
	scanf("%d", &n);
	
	printf("%d", fun(n));
	
	return 0;
}
