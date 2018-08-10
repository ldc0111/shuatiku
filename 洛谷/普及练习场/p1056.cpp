#include <iostream>
#include <string.h>
#include <algorithm>
#include <cstdio>
using namespace std;
int M, N, K, L, D;
int MM[1003],NN[1003];
int KK[1003],LL[1003]; 
int main(){
	int xi,yi;
	int pi,qi;
	memset(MM,0,sizeof(MM));
	memset(NN,0,sizeof(NN));
	memset(KK,0,sizeof(MM));
	memset(LL,0,sizeof(NN));	
	scanf("%d %d %d %d %d",&M, &N, &K, &L, &D);
	
	for(int i = 0; i < D; i++){
		scanf("%d %d %d %d",&xi,&yi,&pi,&qi);
		if(xi == pi){//统计列 
			yi < qi ?NN[yi]++:NN[qi++];
		}
		if(yi == qi){//统计行 
			xi < pi? MM[xi]++:MM[pi++];
		}
	}
	for(int i = 0; i < K; i++){
		int max = 0;
		int temp = 0;
		for(int j = 1; j < M; j++){
			if(MM[j] > temp){
				temp = MM[j];
				max = j;
			}
		}
		KK[i] = max;
		MM[max] = 0;
	}
	for(int i = 0; i < L; i++){
		int max = 0;
		int temp = 0;
		for(int j = 1; j < N; j++){
			if(NN[j] > temp){
				temp = NN[j];
				max = j;
			}
		}
		LL[i] = max;
		NN[max] = 0;
	}
	sort(KK,KK + K);
	sort(LL,LL + L);
	
	for(int i = 0; i < K - 1; i++){
		printf("%d ",KK[i]);
	}
	printf("%d\n",KK[K - 1]);
	for(int i = 0; i < L - 1; i++){
		printf("%d ",LL[i]);
	}
	printf("%d\n",LL[L - 1]);
	
	
	return 0;
}
