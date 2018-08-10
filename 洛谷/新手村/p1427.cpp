#include <stdio.h>

int main() {
	long int a[101];
	int i = 1;
	
	while (i <=100) {
		scanf("%d", &a[i]);
		if(a[i] == 0) {
			break;
		} else {
			i++;
		}
	}
	i--;
	while(i>=1) {
		printf("%d ", a[i]);
		i--;
	}
	printf("\n");
}
