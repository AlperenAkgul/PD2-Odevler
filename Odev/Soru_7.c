/*
Alperen Akgul
2110206030
*/

/*
Kendisine parametre olarak aktar�lan head isimli liste ve age ya� parametresine g�re i�lem yapan fonksiyon, 
listedeki age ya� de�erine sahip ikinci d���m� bularak silmektedir (bu d���m� belle�e iade etmekte). 
A�a��da verilen prototipi kullanarak gerekli fonksiyonu yaz�n�z.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int yas;
	struct node * next;
};
typedef struct node node;
node *head, *p, *q;

node* deleteNode(node*, int);

int main()
{
	int n;
	int arananYas;
	int sayac = 1;
	node *head;
	printf("Yasi Giriniz > ");
	scanf("%d", &n);
	while(n != -1){
		if(sayac == 1){
			head = (node*)malloc(sizeof(node));
			p = head;
			p->yas = n;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
			p->yas = n;
		}
		
		printf("Yasi Giriniz > ");
		scanf("%d", &n);	
		sayac++;
	}
	p->next = NULL;
	
	printf("Aramak Istediginiz Yasi Giriniz > ");
	scanf("%d", &arananYas);
	
	head = deleteNode(head, arananYas);
	p = head;
	while(p != NULL){
		printf("%d ", p->yas);
		p = p->next;
	}
	
	return 0;
}

node* deleteNode(node *head, int arananYas)
{
	p = head;
	int kacTane = 0;
	while(p != NULL){
		if(p->yas == arananYas){
			kacTane++;
			if(kacTane == 2){
				q->next = p->next;
				free(p);
				break;
			}
		}
		q = p;
		p = p->next;
	}
	
	return head;
}
