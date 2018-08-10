#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int main() {
	int w;
	int n;
	int j;
	int a[30002] = {0};
	int tmp = 0;
	scanf("%d", &w);
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	sort(a+1, a+1+n);
	
	j = n;
	for(int i = 1; i <= n; i++) {
		while((a[i] +a[j]) > w && j > i) {
			j--;
		}
		if(j > i) {
			tmp++;
			j--;
		} else {
			break;
		}
	}
	
	printf("%d\n", n-tmp);
	return 0;
}

