#include <stdio.h>

int main() {
	int n,i;
	int a = 0,b = 0;
	scanf("%d",&n);
	
	for(i = 2; n-(i-1)> 0; i++) {
		n -=(i-1);
	}
	
	if(i % 2 == 0) {
		a = i-1; b = 1;
		for(int j = 2; j <= n; j++) {
			a--;
			b++;	
		}
		printf("%d/%d", a, b);
	} else {
		a = 1; b = i-1;
		for(int j = 2; j <= n; j++) {
			a++;
			b--;
		}
		printf("%d/%d", a, b);
	}
	return 0;
}
