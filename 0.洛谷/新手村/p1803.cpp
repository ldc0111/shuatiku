#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct teacher{
	int start;
	int end;
}a[1000002];

bool comp(teacher a, teacher b) {
	return a.end < b.end;
}
//测试数据有问题，比严禁，n没有0项 
int main() {
	int n;
	int tmp = 1;
	teacher b;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d %d", &a[i].start, &a[i].end);
	}
	
	sort(a+1, a+1+n,comp);
	
	b = a[1];
	for(int i = 2; i <= n; i++) {
		if(b.end <=a[i].start){
			tmp++;
		    b = a[i];
		}
	}
	if(n == 0) {
		printf("0\n");
	} else {
		printf("%d", tmp);
	}
	
	
	return 0;
}
 
