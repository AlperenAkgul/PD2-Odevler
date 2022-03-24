#include <stdio.h>

int bas(int n, int m){
	int gecici;
	
	if(m == 0){
		return m;
	}
	else{
		gecici = n/10;
		return bas(gecici, m-1) + n%10;
	}
}

int main(){
	int sayi = 214561;
	int basSayisi = 6;
	
	printf("%d", bas(sayi, 6));
	
	return 0;
}
