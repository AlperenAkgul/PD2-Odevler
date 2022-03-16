#include <stdio.h>

int bolmeIslemi(int x, int y) {
    if (y == 0)
        return 0;
    if (x - y == 0)
        return 1;
    if (x < y)
        return 0;
    return (1 + bolmeIslemi(x - y, y));
 
}

int main() {
 
    int sayi1, sayi2, sonuc;
    
    printf("Sayi 1 giriniz: ");
    scanf("%d", &sayi1);
    printf("Sayi 2 giriniz: ");
    scanf("%d", &sayi2);
    
	sonuc = bolmeIslemi(sayi1, sayi2);
    printf("%d / %d = %d\n", sayi1, sayi2, sonuc);
    return 0;
}

