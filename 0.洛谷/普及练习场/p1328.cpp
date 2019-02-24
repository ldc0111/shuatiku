#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int N,NA,NB;
int NAA[202],NBB[202];
int bi(int a, int b){// 1 aÊ¤Àû 2 bÊ¤Àû 3 Æ½ 
	if(a == b){
		return 3;
	} else if(a == 0 &&(b == 2 || b == 3)){
		return 1;
	} else if(a == 1 &&(b == 3 || b == 0)){
		return 1;
	} else if(a == 2 &&(b == 4|| b == 1)){
		return 1;
	} else if(a == 3 && (b == 4 || b == 2)){
		return 1;
	} else if(a == 4 && (b == 0 || b == 1)){
		return 1;
	} else{
		return 2;
	}
}

int main(){
	memset(NAA,-1,sizeof(NAA));
	memset(NBB,-1,sizeof(NBB));
	
	scanf("%d%d%d",&N,&NA,&NB);
	for(int i = 0; i < NA; i++){
		scanf("%d",&NAA[i]);
	}
	for(int i = 0; i < NB; i++){
		scanf("%d",&NBB[i]);
	}
	int ta = 0, tb = 0;
	int tempa = 0, tempb = 0;
	for(int i = 0; i < N; i++){
		int ans = bi(NAA[ta],NBB[tb]);
		if(ans == 1){//a sheng 
			tempa++;
		} else if(ans == 2){ // b sheng
			tempb++;
		} else{}
		ta = (ta + 1)%NA;
		tb = (tb + 1)%NB; 
	}
	printf("%d %d\n",tempa,tempb);
	
	return 0;
} 
