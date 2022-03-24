#include <stdio.h>

int ortakBolen(int x, int y, int i){	
	if(i == x || i == y){
		if(x%y == 0 || y%x == 0){
			return i;	
		}
		else{
			printf("Ortak Bolen yok");
			return 0;
		}
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
	int sayi1;
	int sayi2;
	
	printf("Sayi 1 giriniz...");
	scanf("%d", &sayi1);
	printf("Sayi 2 giriniz...");
	scanf("%d", &sayi2);
	
	printf("%d", ortakBolen(sayi1, sayi2, 1));
	return 0;
}
