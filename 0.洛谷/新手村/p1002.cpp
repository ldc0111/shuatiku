#include <stdio.h>

int main() {
	float a, b;
	float sum = 0;
	
	scanf("%f %f", &a, &b);
	sum = a+b*0.1;
	
	printf("%d\n", (int)(sum/1.9));
	
	return 0;
}
