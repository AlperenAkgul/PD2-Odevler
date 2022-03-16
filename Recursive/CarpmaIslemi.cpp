#include <stdio.h>
 
int carpmaIslemi(int x, int y) {
    if (y == 0)
        return 0;
    return x + carpmaIslemi(x, y - 1);
}
 
int main() {
    int sayi1, sayi2, sonuc;
    
    printf("Sayi 1 giriniz: ");
    scanf("%d", &sayi1);
    printf("Sayi 2 giriniz: ");
    scanf("%d", &sayi2);
    
    sonuc = carpmaIslemi(sayi1, sayi2);
    printf("%d * %d = %d\n", sayi1, sayi2, sonuc);
    
    return 0;
}
 

