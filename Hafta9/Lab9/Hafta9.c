#include <stdio.h>
#include <stdlib.h>

struct students{
		int no;
		char isim[40];
		int vize;
		int final;
		struct students *next;
	};
typedef struct students std;
std *head, *p, *q;

void createList()
{
	int i, n;
	
	printf("Ogrenci Sayisini Giriniz > ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		if(i == 0){
			head = (std*)malloc(sizeof(std));
			p = head;
		}
		else{
			p->next = (std*)malloc(sizeof(std));
			p = p->next;
		}
		printf("Ogrenci No: ");
		scanf("%d", &p->no);
		printf("Ogrenci Isim: ");
		scanf("%s", p->isim);
		printf("Ogrenci Vize ve Final: ");
		scanf("%d %d", &p->vize, &p->final);
	}
	p->next = NULL; //En son eklenen d���nmden sonraki d���me NULL atamas� yap�lmas� gerekiyor
}

void yeniKayitEkleme()
{
	int temp;
	p = head; 
	q = head;
	
	printf("Yeni kayit eklenecek ogrencinin ogrenci numarasini giriniz: ");
	scanf("%d", &temp);
	
	while(p != NULL && temp > p->no){
		q = p;
		p = p->next;
	}
	
	// E�er en sona eklenmeyecekse p NULL de�ildir
	// Sona eklenecekse p->no kontrol� hata verir
	// Girilen ��renci no listede varsa uyar� verir ve fonk ��kar
	if(p != NULL && p->no == temp)
	{
		printf("Yeni kayit eklenemez, girilen ogrenci numarasi listede var\n");
		return;
	}
	
	// E�er listede verilen no yoksa yeni kay�t i�in ptr olu�turulur ve yer ay�r�l�r
	std * newStd;
	newStd = (std*)malloc(sizeof(std));
	newStd->no = temp;
	printf("Ogrenci Isim: ");
	scanf("%s", newStd->isim);
	printf("Ogrenci Vize ve Final: ");		
	scanf("%d %d", &newStd->vize, &newStd->final);

	// E�er head p'ye e�itse liste ya bo�tur ya da verilen numara listenin en ba��na eklenecektir (en k���k de�er)
	if(head == p){
		newStd->next = head;
		head = newStd;
	}else // Sona veya ortaya eklenecekse q ile p aras�na ekleme yap�l�r, sona eklenecekken p NULL'd�r
	{
		q->next = newStd;
		newStd->next = p;
	}
}

void kayitListeleme()
{
	int i;
	p = head;
	
	while(p != NULL){
		printf("Ogrenci No: %d\n", p->no);
		printf("Ogrenci Isim: %s\n", p->isim);
		printf("Ogrenci Vize ve Final: %d %d  \n", p->vize, p->final);		
		p = p->next;
	}
}

void kayitGuncelleme()
{
	printf("Kayidi guncellenecek ogrencinin eski numarasini giriniz: ");
	scanf("%d", &q->no);
	
	while(p->next != NULL && p->no != q->no){
		q = p;
		p = p->next;
	}

	printf("Yeni Ogrenci No: ");
	scanf("%d", &p->no);
	printf("Yeni Ogrenci Isim: ");
	scanf("%s", p->isim);
	printf("Yeni Ogrenci Vize ve Final: ");		
	scanf("%d %d", &p->vize, &p->final);
}

void sinifOrtalamasi()
{
	int i;
	int sonuc = 0;
	p = head;
	while(p->next != NULL){
		sonuc += p->vize * 0.4 + p->final * 0.6;
		q = p;
		p = p->next;
		i++;
	}
	printf("Sinif Ortalamasi: %d", sonuc / i);
}

void ortalamayaGoreEnBasariliOgrenci()
{
	int i, j;
	int sonuc = 0;
	std *enBasarili = head;
	p = head;
	while(p->next != NULL){
		sonuc += p->vize * 0.4 + p->final * 0.6;
		q = p;
		p = p->next;
		i++;
	}
	
	for(j = i; j >= 0; j--){
		if(p->final * 0.6 + p->vize * 0.4 > sonuc / i){
			enBasarili = p;
		}
	}
	
	printf("Ogrenci No: %d", enBasarili->no);
	printf("Ogrenci Isim: %s", enBasarili->isim);
	printf("Ogrenci Vize ve Final: %d %d ", enBasarili->vize, enBasarili->final);	
}

int main()
{
	int secim = 0;
	
	createList();
	
	while(1){
		printf("1.Yeni Kayit Ekleme\n2.Kayit Listeleme\n3.Kayit Guncelleme\n4.Sinif Ortalamasi Hesapla\n5.Ortalamaya Gore En Basarili Ogrenci Bilgisini Goster\n6.Cikis");
		printf("Islem > ");
		scanf("%d", &secim);
		
		if(secim == 1)
			yeniKayitEkleme();
		else if(secim == 2)
			kayitListeleme();
		else if(secim == 3)
			kayitGuncelleme();
		else if(secim == 4)
			sinifOrtalamasi();
		else if(secim == 5)
			ortalamayaGoreEnBasariliOgrenci();
		else if(secim == 6){
			printf("Cikis Yapiliyor...");
			break;
		}
		else
			printf("Yanlis Giris Yapildi.");
	}
	
	return 0;
}
