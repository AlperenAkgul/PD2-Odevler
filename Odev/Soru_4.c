/*
Alperen Akgul
2110206030
*/

/*
Bir ba�l� do�rusal listelerde listenin sonundaki d���m ile 
ba��ndaki d���m�n yerini de�i�tiren changeFirstAndLast isimli bir fonksiyon yaz�n�z. 
Fonksiyon parametre olarak bir liste al�p g�ncellenen listeyi geri d�nd�recektir.
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
