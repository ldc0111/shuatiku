/*#include <stdio.h>
//³¬Ê± 
int main() {
	int n;
	int sum = 0;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++) {
		int res = 0;
		int j = 0;
		for(j = 1; j*j < i; j++){
			if(i % j == 0)
			res++;
		}
		res *= 2;
		if(j*j == i) {
			res++;
		}
		
		sum += res;
	}
	
	printf("%d",sum);
	return 0;
}*/


#include <iostream>

using namespace std;

int N,ans = 0;
int main() {
	cin >> N;
	for(int i = 1, j; i <= N; i++) {
		j = N/i;
		ans += j;
	}
	cout << ans << endl;
	return 0;
}
