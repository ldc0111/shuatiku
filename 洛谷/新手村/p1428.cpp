#include <stdio.h>

int main() {
	int a[2][101] = {0};
	int n;
	int i,j;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[0][i]);
		
		for (j = 1; j < i ; j++) {
			if (a[0][i] > a[0][j]) {
				a[1][i]++;
			}
		}
	}
	
	for (i = 1; i <= n; i++) {
		printf("%d ", a[1][i]);
	}
	printf("\n");
	
} 
