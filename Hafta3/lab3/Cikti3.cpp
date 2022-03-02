#include <stdio.h>

int toplam(int n){
	if(n == 1)
		return n;
	else
		return (n+ toplam(n-1));
}

int main(){
	int sayi = 6;
	printf("Sonuc = %d", toplam(sayi));
}
