#include <stdio.h>

int ortakBolen(int x, int y, int i){
	if(i == x || i == y){
		return i;
	}
	else{
		if(x%i == 0 && y%i == 0){
			return ortakBolen(x, y, i + 1);
		}
		else{
			return ortakBolen(x, y, i + 1);
		}
	}		
}

int main(){
	int sayi1 = 48;
	int sayi2 = 8;
	
	printf("%d", ortakBolen(sayi1, sayi2, 1));
	return 0;
}
