#include <stdio.h>
#define n 6

int enBuyuk(int dizi[], int enbuyuk, int N){
	if(dizi[N] >= enbuyuk){
		enbuyuk = dizi[N];
		return enBuyuk(dizi, enbuyuk, N - 1);
	}
	else
		return enbuyuk;
}

int main(){
	int dizi[n] = {1,2,3,4,5,6};
	int enbuyuk = dizi[0];
	
	printf("%d", enBuyuk(dizi, enbuyuk, n));
	return 0;
}
