#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	int no;
	char isim[40];
	char bolum[40];
};
typedef struct student node;
FILE *ptr;
node bosOgrenci = {0, "", ""};

void dosyaOlusturma()
{
	int i;
	if((ptr = fopen("students.dat", "w")) == NULL){
		printf("Dosya Acilamadi");
	}
	else{
		for(i = 0; i < 100; i++){
			fwrite(&bosOgrenci, sizeof(node), 1, ptr);
		}
		fclose(ptr);
	}
}

void kayitEkleme()
{
	node ogrenciBilgi = {0, "", ""};
	if((ptr = fopen("students.dat", "r+")) == NULL){
		printf("Dosya Acilamadi");
	}
	else{
		printf("1-100 arasinda ogrenci no giriniz.(Durdurmak icin 0)");
		scanf("%d", &ogrenciBilgi.no);
		while(ogrenciBilgi.no != 0){
			printf("Isim ve Bolum Giriniz > ");
			scanf("%s %s", ogrenciBilgi.isim, ogrenciBilgi.bolum);
			fseek(ptr, (ogrenciBilgi.no - 1), SEEK_SET);
			fwrite(&ogrenciBilgi, sizeof(node), 1, ptr);
			
			printf("1-100 arasinda ogrenci no giriniz.(Durdurmak icin 0)");
			scanf("%d", &ogrenciBilgi.no);
		}
		fclose(ptr);
	}
}

void ismeGoreAramaYapma()
{
	char str1[40];
	printf("aramak istediginiz ismi giriniz > ");
	scanf("%s", str1);
	if((ptr = fopen("students.dat", "r")) == NULL){
		printf("Dosya Acilamadi.");
	}
	else{
		while(!feof(ptr)){
			fread(&bosOgrenci, sizeof(node), 1, ptr);
			if(strcmp(str1, bosOgrenci.isim) == 0){
				printf("%d %s %s", bosOgrenci.no, bosOgrenci.isim, bosOgrenci.bolum);
			}
		}
		fclose(ptr);
	}
}

int main()
{
	int secim;
	while(1){
		printf("1.Dosya Olusturma\n2.Kayit Ekleme\n3.Isme Gore Arama Yapma\n-1.Cikis\n");
		printf("Secim > ");
		scanf("%d", &secim);
		
		switch(secim){
			case 1:
				dosyaOlusturma();
				break;
			case 2:
				kayitEkleme();
				break;
			case 3:
				ismeGoreAramaYapma();
				break;
			case -1:
				return 0;
		}	
	}	
	
	return 0;
}

