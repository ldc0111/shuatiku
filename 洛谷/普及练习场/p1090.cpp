#include<stdio.h>
#include<stdlib.h>

int a[10002];
int size = 0;
void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void put(int k) {//jin ru
	a[++size] = k;
	int zi = size;
	int hood = 0;
	while(zi > 1) {
		hood  = zi >> 1;
		if(a[hood] <= a[zi]) {// 直到 根节点小于 子节点 
			return ;
		}
		swap(&a[hood], &a[zi]);
		zi = hood;
    }
}
 
int get(){
	int res = a[1];
	int hood,zi;
	a[1] = a[size--];
	hood = 1;
	while(hood*2 <= size) {
		zi = hood << 1;
		if((zi+1) <= size && a[zi+1] < a[zi]){//找最小字节点 
			zi++;
		}
		if(a[hood] <= a[zi]) {
			return res;
		}
		swap(&a[hood], &a[zi]);
		hood = zi;
	}
	return res;
}

int main() {
	int n;
	int temp;
	int sum = 0;
	scanf("%d",&n);
	
	for(int i = 1; i <= n;i++) {
		scanf("%d", &temp);
		put(temp);
	}
	
	while(size > 1) {
		temp = get()+get();
		sum += temp;
		put(temp);
	}
	
	printf("%d", sum);
	return 0;
}
