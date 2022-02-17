#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zarlariAt();

int main (void) {
	int toplam = 0;
	int i;
	int puan1;
	
	puan1 = zarlariAt();
	
    printf("Puaniniz: %d\n", puan1);

    if(puan1 == 7 || puan1 == 11){
        printf("Kazandiniz!");
    }
    else if(puan1 == 2 || puan1 == 3 || puan1 == 12){
        printf("Kaybettiniz!");
    }
    else
    {
        i = 1;
    }
    
    while (i == 1) {
    	
		printf("Tekrar Zar Atmak Icin Enter Tusuna Basin\n");
		getchar();
		
        toplam = zarlariAt();
        printf("Puaniniz: %d\n", toplam);
        printf("Tutturmaniz Gereken: %d\n", puan1);
        
        if (toplam == puan1) {
            printf("Kazandiniz!");
            break;
        }
        else if(toplam == 7) {
            printf("Kaybettiniz!");
            break;
        }
    }
	return 0;
}

int zarlariAt(){
	int zar1, zar2;
	
    printf("Zarlar Atiliyor...\n");

    srand(time(NULL));
    zar1 = 1 + rand()%7;
    
    srand(time(NULL));
    zar2 = 1 + rand()%7;
    
    return zar1 + zar2;
}

