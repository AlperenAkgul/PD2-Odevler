#include <stdio.h>

int fun(int x){
	if(x == 1 || x == 0){
		return x;
	}
	return fun(x) + fun(x - 2);
}

int main(){
	int n, i;
	
	printf("N sayisini giriniz...");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("%d ", fun(i));
	}
	
	return 0;
}
