#include <stdio.h>

int fun(int i, int j) {

	if (i == j || j == 0)
		return 1;

	else
		return fun(i - 1, j) + fun(i - 1, j - 1);
}

int main() {
	int N, i, j, A[50][50];

	printf("Satir Sayisini Giriniz...");
	scanf("%d", &N);

	printf("\n");

	for (i = 0; i < N; i++) {

		for (j = 0; j <= i; j++) {
			A[i][j] = fun(i, j);
		}
	}

	for (i = 0;i < N;i++) {

		for (j = 0; j <= i; j++) {

			printf("%-6d", A[i][j]);

		}
		printf("\n");
	}
}
