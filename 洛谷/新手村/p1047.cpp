#include <stdio.h>

int main() {
	int length;
	int n;
	int a[10001] = {0};
	int  low, high;
	int s = 0;
	
	scanf("%d %d", &length, &n);
	
	for(int i = 1; i <= n; i++)  {
		scanf("%d %d", &low, &high);
		
		for(int i = low; i<= high; i++) {
			a[i] = 1;
		}
	}
	for(int i = 0;i <= length; i++) {
		if(a[i] == 0) {
			s++;
		}
	}
	
	printf("%d\n", s);
}
