#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;


struct xian {
	int biao;
	int shu;
}hang[1005],lie[1005];

bool comp(struct xian a, struct xian b) {
	return a.shu > b.shu;
}


int main() {
	int M,N,K,L,D;//行 列 横向通道  纵向通道  D对
	int arr[4];
	
	memset(hang, 0, sizeof(hang));
	memset(lie, 0, sizeof(lie));
	scanf("%d %d %d %d %d", &M, &N,&K, &L, &D);
	
	for(int i = 0; i < D; i++) {
		scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
		if((arr[0] - arr[2]) == -1) {
			hang[(arr[0])].biao = arr[0];
			hang[(arr[0])].shu++;
		}else if((arr[2] - arr[0]) == -1) {
			hang[(arr[2])].biao = arr[2];
			hang[(arr[2])].shu++;
		} else if((arr[1] - arr[3]) == -1){
			lie[(arr[1])].biao = arr[1];
			lie[(arr[1])].shu++;
		} else if((arr[3] - arr[1]) == -1) {
			lie[(arr[3])].biao = arr[3];
			lie[(arr[3])].shu++;
		}
	}
	
	sort(hang, hang+1005,comp);
	sort(lie, lie+1005, comp);
	
	for(int i = 0; i < K; i++) {
		printf(i == 0?"%d":" %d",hang[i].biao);
	}
	printf("\n");
	
	for(int i = 0; i < L; i++) {
		printf(i == 0?"%d":" %d",lie[i].biao);
	}
	printf("\n");
	return 0;
}
