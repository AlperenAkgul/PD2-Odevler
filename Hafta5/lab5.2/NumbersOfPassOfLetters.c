#include <stdio.h>

int main(){
	char array[1000];
	char *p;
	int harfSayisi = 0, count = 1;
	int i, j;
	
	
	printf("Kelime Gir: ");
	scanf("%s", &array);
	p = array;
	
	while(*(p + harfSayisi) != '\0'){
		harfSayisi++;
	}
	
	for(i = 0; i < harfSayisi; i++){
		for(j = i + 1; j < harfSayisi; j++){
			if(*(p+i) == *(p+j)){
				count +=1;
				*(p + j) = '0';
			}
		}
		if(*(p + i) != '0'){
			printf("%c repeats %d times\n", *(p + i), count);
		}
		count = 1;
	
	}
	
	return 0;
}
