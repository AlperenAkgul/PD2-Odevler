#include <stdio.h>

int fun(int x){
	if(x == 1){
		return x;
	}
	else{
		return (x * fun(x - 1));
	}
}

int main(){
	int i;
	
	for(i = 1; i < 11; i++){
		printf("%d! = %d\n", i ,fun(i));
	}
	return 0;
}
