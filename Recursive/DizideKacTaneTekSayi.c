#include <stdio.h>

int tekSayi(int dizi[], int eleman){
	if (eleman <= 0){
		return 0;
	}
	else{
		if(dizi[eleman] %2 == 1){
			return 1 + tekSayi(dizi, eleman - 1);
		}
		else{
			return tekSayi(dizi, eleman - 1);
		}
	}
}

int main(){
	int dizi[6] = {1, 5, 8, 9, 23, 52};
	int tane = 0;
	
	tane = tekSayi(dizi, 6);
	
	printf("%d", tane);
	
	return 0;
}
