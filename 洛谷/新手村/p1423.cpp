#include <stdio.h>

int main() {
	double a = 2;
	double n;
	double bu = 2*0.98;
	int i;
	scanf("%lf", &n);
	
	for(i = 1;a < n; i++) {
		a += bu;
		bu *= 0.98;
	}
	
	printf("%d\n", i);
	
	return 0; 
}
