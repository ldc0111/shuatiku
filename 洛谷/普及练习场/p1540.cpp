#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int a[101];
int cha = 0;//差字典次数 
int huan = 0;//从哪个位置开始换
int ne = 0;//内存中元素个数 

bool chaz(int &temp){
	for(int i = 0; i < ne; i++){
		if(temp == a[i]){
			return true;//查到 
		}
	}
	return false;//未查到 
}

int main(){
	int M,N;
	memset(a,-1,sizeof(a));
	
	scanf("%d %d",&M, &N);
	for(int i = 0;i < N; i++){
		int temp;
		scanf("%d", &temp);
		
		if(!chaz(temp)){//未查到 
			if(ne != M){//内存未满 
			    a[ne] = temp;
			    ne++;
			    cha++;
			} else{//内存满
			   a[huan] = temp;
			   huan = (huan + 1)%M;
			   cha++; 
			} 
		} else {
			continue;
		}
	}
	printf("%d\n", cha);
	return 0;
}
