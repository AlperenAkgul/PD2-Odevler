#include <stdio.h>
#include <string.h>

int no;
char isim[40];
char bolum[40];

FILE *ptr;
FILE *tek;
FILE *cift;

void dosyaOlustur()
{
	int no;
	char isim[40];
	char bolum[40];
	
	if((ptr = fopen("data.dat", "w")) == NULL)
		printf("Dosya Acilamadi");
	else{
		printf("Lutfen Ogrenci Numarasini, Ismini ve Bolumunu giriniz.\n");
		printf("Bitirmek icin EOF (CTRL + Z) Yaziniz.\n");
		printf("? ");
		scanf("%d%s%s", &no, isim, bolum);
		
		while(!feof(stdin)){
			fprintf(ptr, "%d %s %s\n", no, isim, bolum);
			printf("? ");
			scanf("%d%s%s", &no, isim, bolum);
		}	
		fclose(ptr);	
	}
}

void listeleme()
{
	if((ptr = fopen("data.dat", "r")) == NULL)
		printf("Dosya Acilamadi");
	else{
		fscanf(ptr, "%d%s%s", &no, isim, bolum);
		while(!feof(ptr)){
			printf("\n? ");
			printf("%d %s %s", no, isim, bolum);	
			fscanf(ptr, "%d%s%s", &no, isim, bolum);
		}
	}
	printf("\n\n");
	fclose(ptr);
}

void yeniKayitEkleme()
{
	int no;
	char isim[40];
	char bolum[40];

	if(ptr = fopen("data.dat", "a+") == NULL)
		printf("Dosya Acilamadi");
	else{
		printf("Lutfen Ogrenci Numarasini, Ismini ve Bolumunu giriniz.\n");
		printf("Bitirmek icin EOF (CTRL + Z) Yaziniz.\n");
		printf("? ");
		scanf("%d%s%s", &no, isim, bolum);
		
		while(!feof(stdin)){
			fprintf(ptr, "%d %s %s", no, isim, bolum);
			printf("? ");
			scanf("%d%s%s", &no, isim, bolum);
		}
		printf("\n\n");
		fclose(ptr);
	}
}

void ismeGoreArama()
{
	char arama[40];
	
	printf("Aranacak ismi giriniz\n> ");
	scanf("%s", arama);
	
	if((ptr = fopen("data.dat", "r")) == NULL)
		printf("Dosya Acilamadi");
	else{
		while(!feof(ptr)){
			fscanf(ptr, "%d%s%s", &no, isim, bolum);
			if(strcmp(arama, isim) == 0){
				printf("%d %s %s", no, isim, bolum);
			}
		}
		printf("\n\n");
		fclose(ptr);
	}
}

void tekCift()
{
	tek = fopen("tek.dat", "w");
	cift = fopen("cift.dat", "w");
	
	if((ptr = fopen("data.dat", "r")) == NULL)
		printf("Dosya Acilamadi");
	else{
		fscanf(ptr, "%d%s%s", &no, isim, bolum);
		while(!feof(ptr)){
			if(no % 2 == 0)
				fprintf(cift, "%d %s %s\n", no, isim, bolum);
			else
				fprintf(tek, "%d %s %s\n", no, isim, bolum);
			fscanf(ptr, "%d%s%s", &no, isim, bolum);
		}
		fclose(ptr);
		fclose(tek);
		fclose(cift);
	}
}

int main()
{
	int secim;
	
	while(1){
		printf("1.Dosya Olustur\n2.Listeleme\n3.Yeni Kayit Ekleme\n4.Isme Gore Arama\n5.Tek Cift\n-1.Cikis\n");
		printf("\nSecim > ");
		scanf("%d", &secim);
		
		switch(secim){
			case 1:
				dosyaOlustur();
				break;
			
			case 2:
				listeleme();
				break;
			
			case 3:
				yeniKayitEkleme();
				break;
			
			case 4:
				ismeGoreArama();
				break;
				
			case 5:
				tekCift();
				break;
				
			case -1: 
				return 0;
		}
	}	
	
	return 0;
}
