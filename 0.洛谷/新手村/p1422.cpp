#include <stdio.h>

int main() {
	int a;
	float sum;
	scanf("%d", &a);
	
	if(a <= 150) {
		sum = (float)a*0.4463;
	} else if (a <= 400){
		sum = 150*0.4463+(a-150)*0.4663;
	} else {
		sum = 150*0.4463+250*0.4663+(a-400)*0.5663;
	}
	
	printf("%.1f\n", sum);
	
	return 0;
}
