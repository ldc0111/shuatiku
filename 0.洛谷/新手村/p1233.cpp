#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
struct teacher {
	int biao;
	double shi;
}a[1002];


bool comp(teacher a, teacher b) {
	if( a.shi == b.shi) return a.biao < b.biao;
	return a.shi < b.shi;
}

int main() {
	int n;
	int tap;
	double tmp = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%lf", &a[i].shi);
		a[i].biao = i;
	}
	
	sort(a+1,a+1+n,comp);
	tap = n; 
	
	for(int i = 1; i <= n; i++) {
		printf(i  == n ?"%d":"%d ", a[i].biao);
		tmp += ((float)(--tap))*a[i].shi;
	}
	printf("\n");	
	
	tmp /= n;
	printf("%0.2lf\n", tmp);
	return 0;
}
