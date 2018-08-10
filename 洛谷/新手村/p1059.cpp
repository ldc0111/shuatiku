#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;


int main() {
	int n;
	int a[105];
	int tmp = 0;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a+1, a+1+n);
	for(int i = 1; i <= n; i++) {
		while(a[i] == a[i+1] && i+1 <= n) {
			i++;
		}
		tmp++;
	}
	
	
	printf("%d\n",tmp);
	for(int i = 1; i <= n; i++) {
		while(a[i] == a[i+1] && i+1 <=n) {//a[i+1]为下一个数 
			i++;
		}
		printf(i == n?"%d\n":"%d ", a[i]);
	}
	
	return 0;
} 
