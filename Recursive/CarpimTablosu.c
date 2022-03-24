#include <stdio.h>

void fun(int x){
	int i;
	if(x <= 10){
		for(i = 1; i < 11; i++){
			printf("%4d", x*i);
		}
		printf("\n");
		return fun(x + 1);
	}
}

int main(){
	fun(1);
	return 0;
}
