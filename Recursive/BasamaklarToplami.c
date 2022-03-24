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
	int sayi;
	int basSayisi;
	
	printf("Sayiyi giriniz...");
	scanf("%d", &sayi);
	printf("Basamak sayisini giriniz...");
	scanf("%d", &basSayisi);

	printf("%d", bas(sayi, basSayisi));
	
	return 0;
}
