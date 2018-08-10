#include <stdio.h>
#include <math.h>
int isp(int n) {
	int i = 0;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {
	int n;
	int a, b, c;
	scanf("%d", &n);
	
	for(a = 2; a <= n-4; a++) {
		for(b = 2; b <= n-4; b++) {
			c = n-a-b;
			if(isp(a) && isp(b) && isp(c)) {
				printf("%d %d %d\n", a, b, c);
				return 0;
			}
		}
	}
	return 0;
}
