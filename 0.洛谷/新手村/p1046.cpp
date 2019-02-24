#include <stdio.h>

int main() {
	int a[11];
	int n;
	int s = 0;
	
	for(int i = 1; i <= 10; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	
	for(int i = 1; i <= 10; i++) {
		if(a[i] <= (n+30)) {
			s++;
		}
	}
	
	printf("%d\n", s++);
	
	return 0;
}
