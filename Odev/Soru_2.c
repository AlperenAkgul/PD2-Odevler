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
nd *p, *q, *r;

nd* fun(nd *head)
{
	/*p = head;
	q = p;
	while(r->next != NULL){
		p = p->next;
		r = p->next;
		p->next = q;
		q = p;
	}
	head->next = NULL;
	head = r;
	return head;*/
	struct node *p, *q, *r;
	p = head;
    while (p != NULL)
    {
        r  = p->next;  
        p->next = q;   
        q = p;
        p = r;
    }
    head = q;
    return head;
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

