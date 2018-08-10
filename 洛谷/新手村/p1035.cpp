#include <stdio.h>

int main() {
	double n;
	double sum = 0;
	scanf("%lf",&n);
	int i;
	for(i = 1;sum <= n; i++) {
		sum +=1/(double)i;
	}
	printf("%d\n", i-1);
	return 0; 
} 
