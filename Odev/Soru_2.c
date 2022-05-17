/*
Alperen Akgul
2110206030
*/

/*
Bir baðlý doðrusal listelerde listenin sonundaki düðümü keserek listenin baþýna ekleyen
 ve oluþan listenin son halini geri döndüren prototipi aþaðýda verilmiþ fonksiyonu yazýnýz.
*/

#include <stdlib.h>
#include <stdio.h>

struct node{
	int number;
	struct node *next;
};
typedef struct node nd;
nd *p, *q;

nd* fun(nd *head)
{
	p = head;
	while(p->next != NULL){
		q = p;
		p = p->next;
	}
	p->next = head;
	q->next = NULL;
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
	
	head = fun(head);
	p = head;
	
	while(p != NULL){
		printf("%d ", p->number);
		p = p->next;
	}
	
	return 0;
}

