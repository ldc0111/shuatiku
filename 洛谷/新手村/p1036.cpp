#include <stdio.h>
#include <math.h>

int a[22] = {0};
int isprime(int n) {
	int i = sqrt((double)n);
	for(int j = 2; j <= i; j++) {
		if(n%j == 0) {
			return 0;
		}
	}
	return 1;
}
int rule(int shengK, int Sum1, int start, int end) {
	if(shengK == 0) {
		return isprime (Sum1);
	}
	int sum = 0;
	
	for(int i  = start; i <= end; i++) {
		sum += rule(shengK-1, Sum1+a[i], i+1, end);
	}
	return sum;
}


int main() {
	int n, k;
	int sum = 0;
	scanf("%d %d", &n, &k);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	sum = rule(k, 0,0, n-1);
	
	printf("%d\n", sum);
}
