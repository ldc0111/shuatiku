#include <stdio.h>

int main() {
	int n, x;
	int ge = 0;
	int wei;
	int tmp;
	
	scanf("%d %d", &n, &x);
	for(int i = 1;i <= n; i++) {
		wei = i;
		while(wei > 0) {
			tmp = wei%10;
			
			if(tmp == x) {
				ge++;
			}
			
			wei /= 10;
		}
	}
	
	printf("%d\n", ge); 
	return 0;
} 
