#include <stdio.h>


int main() {
	int n = 0;
	int sum = 0;
	int a[102];
	int i = 0;
	int step = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	sum /= n;
	for(int i = 1; i <= n; i++) {
		a[i] -=sum;
	}
	
	for(int i = 1; i <n; i++) {//���һ��һ��Ϊ0 ��ǰ�� 
		if(a[i] == 0) continue;
		a[i+1] += a[i];
		step++;
	} 
	
	
	printf("%d",step); 
	return 0;
}
