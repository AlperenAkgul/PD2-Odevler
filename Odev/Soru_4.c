/*
Alperen Akgul
2110206030
*/

/*
Bir baðlý doðrusal listelerde listenin sonundaki düðüm ile 
baþýndaki düðümün yerini deðiþtiren changeFirstAndLast isimli bir fonksiyon yazýnýz. 
Fonksiyon parametre olarak bir liste alýp güncellenen listeyi geri döndürecektir.
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int number;
	struct node *next;
};
typedef struct node nd;
nd *p, *q, *last;

nd* changeFirstAndLast(nd *head)
{
	p = head;
	while(p->next != NULL){
		q = p;
		p = p->next;
	}
	p->next = head->next;
	q->next = head;
	head->next = NULL;
	
	return p;
}

int main()
{
	int n;
	int sayac = 1;
	nd *head;
	printf("Sayiyi Giriniz > ");
	scanf("%d", &n);
	while(n != -1){
		if(sayac == 1){
			head = (nd*)malloc(sizeof(nd));
			p = head;
			p->number = n;
		}
		else{
			p->next = (nd*)malloc(sizeof(nd));
			p = p->next;
			p->number = n;
		}
		
		printf("Sayiyi Giriniz > ");
		scanf("%d", &n);	
		sayac++;
	}
	p->next = NULL;
	last = p;
	
	head = changeFirstAndLast(head);
	p = head;
	while(p != NULL){
		printf("%d ", p->number);
		p = p->next;
	}
	
	return 0;
}
