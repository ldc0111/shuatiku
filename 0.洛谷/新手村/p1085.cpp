#include <stdio.h>

int main() {
	int a,  b;
	int max = 0;
	int day;
	
	for (int i = 1; i <= 7;i++) {
		scanf("%d %d", &a, &b);
		if(max < (a+b)) {
			max = a+b;
			day = i;
		}
	}
	
	if (max <= 8) {
		printf("0\n");
	} else {
		printf("%d\n", day);
	} 
}
