#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int a[101];
int cha = 0;//���ֵ���� 
int huan = 0;//���ĸ�λ�ÿ�ʼ��
int ne = 0;//�ڴ���Ԫ�ظ��� 

bool chaz(int &temp){
	for(int i = 0; i < ne; i++){
		if(temp == a[i]){
			return true;//�鵽 
		}
	}
	return false;//δ�鵽 
}

int main(){
	int M,N;
	memset(a,-1,sizeof(a));
	
	scanf("%d %d",&M, &N);
	for(int i = 0;i < N; i++){
		int temp;
		scanf("%d", &temp);
		
		if(!chaz(temp)){//δ�鵽 
			if(ne != M){//�ڴ�δ�� 
			    a[ne] = temp;
			    ne++;
			    cha++;
			} else{//�ڴ���
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
