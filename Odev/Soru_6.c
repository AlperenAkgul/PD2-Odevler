/*
Alperen Akgul
2110206030
*/

/*
Klavyeden -1 girilene kadar verilen çift sayýlarý tek baðlý doðrusal bir listenin baþýna, 
verilen tek sayýlarý ise listenin sonuna ekleyen programý yazýnýz.
*/

#include <stdlib.h>
#include <stdio.h>

struct node{
	int number;
	struct node *next;
};
typedef struct node nd;
nd *tekHead, *ciftHead, *tek, *cift, *p;

int main()
{
	int tekSayac = 0;
	int ciftSayac = 0;
	int n;
	
	printf("Sayiyi Giriniz > ");
	scanf("%d", &n);
	
	while(n != -1){
		if(n % 2 == 0){
			if(ciftSayac == 0){
				ciftHead = (nd*)malloc(sizeof(nd));
				cift = ciftHead;
				cift->number = n;
			}
			else{
				cift->next = (nd*)malloc(sizeof(nd));
				cift = cift->next;
				cift->number = n;
			}
			ciftSayac++;
		}
		else{
			if(tekSayac == 0){
				tekHead = (nd*)malloc(sizeof(nd));
				tek = tekHead;
				tek->number = n;
			}
			else{
				tek->next = (nd*)malloc(sizeof(nd));
				tek = tek->next;
				tek->number = n;
			}
			tekSayac++;		
		}
		printf("Sayiyi Giriniz > ");
		scanf("%d", &n);
	}
	
	cift->next = tekHead;
	tek->next = NULL;
	p = ciftHead;
	while(p != NULL){
		printf("%d ", p->number);
		p = p->next;
	}
	
	return 0;
}
