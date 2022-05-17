/*
Alperen Akgul
2110206030
*/

/*
Bir baðlý doðrusal listelerde listenin ortasýnda yer alan elemaný silen (tuttuðu alaný belleðe geri iade eden) 
bir fonksiyon yazýnýz (Liste 100 ya da 101 elemanlý ise 50. elamaný silecek þekilde). 
Fonksiyon parametre olarak bir liste alýp güncellenen listeyi geri döndürecektir.
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int number;
	struct node *next;
};
typedef struct node nd;
nd *p, *q;

nd* fun(nd *head, int sayac)
{
	int i;
	p = head;
	for(i = 1; i < (sayac / 2); i++){
		q = p;
		p = p->next;
	}
	q->next = p->next;
	free(p);
	
	return head;
}

int main()
{
	int n;
	int sayac = 0;
	nd *head;
	printf("Sayiyi Giriniz > ");
	scanf("%d", &n);
	while(n != -1){
		if(sayac == 0){
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
	
	head = fun(head, sayac);
	p = head;
	while(p != NULL){
		printf("%d ", p->number);
		p = p->next;
	}
	
	return 0;
}
