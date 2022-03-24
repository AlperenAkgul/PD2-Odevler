#include <stdio.h>
 
int usAlma(int taban, int us) {
    if (us == 0)
        return 1;
    return taban * usAlma(taban, us - 1);
}

int main() {
    int taban, us;
    int sonuc;
 	
 	printf("Sayinin Tabanini Giriniz: ");
 	scanf("%d", &taban);
 	
 	printf("Sayinin Ussunu Giriniz: ");
 	scanf("%d", &us);
 	
    sonuc = usAlma(taban, us);
 
    printf("(%d)^%d = %d\n", taban, us, sonuc);
    return 0;
}
 

