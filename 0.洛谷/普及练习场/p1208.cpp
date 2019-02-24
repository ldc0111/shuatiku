#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct nong{
	int Pi;
	int Ai;
}a[2000002];

bool comp(nong a, nong b) {
	return a.Pi < b.Pi;
}
int main(){
	int N;
	int M;
	int sum = 0;
	scanf("%d %d",&N, &M);
	
	for(int i = 1; i <= M; i++){
		scanf("%d %d",&a[i].Pi,&a[i].Ai);
	}
	
	sort(a+1,a+1+M,comp);
	
	for(int i = 1; i < M&& N >0; i++) {
		if(N-a[i].Ai > 0) {
			sum += a[i].Pi * a[i].Ai;
			N -= a[i].Ai;
		}else{
			sum += a[i].Pi * N;
			N = 0;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
