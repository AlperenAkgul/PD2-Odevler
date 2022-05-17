/*
Alperen Akgul
2110206030
*/

/*
Bir ba�l� do�rusal listelerde listenin ba��ndaki d���m� keserek listenin sonuna ekleyen 
ve olu�an listenin son halini geri d�nd�ren prototipi a�a��da verilmi� fonksiyonu yaz�n�z.
*/

#include <stdio.h>
#include <stdlib.h>

struct node* cutheadaddlast(struct node* head);

struct node {
int number;
struct node * next;
};
typedef struct node nd;
nd *head, *p, *q;

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
	
	head = cutheadaddlast(head);
	p = head;
	while(p != NULL){
		printf("%d ", p->number);
		p = p->next;
	}
	
	return 0;
}

nd* cutheadaddlast(nd *head)
{
	q = head;
	p = head;
	
	while(p->next != NULL){
		p = p->next;
	}
	
	q = head->next;
	p->next = head;
	head->next = NULL;
	head = q;
	
	return head;
}
