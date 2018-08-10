#include <iostream>
#include <cstdio>
#include <string.h> 
#include <algorithm>
#define maxn1 1005
#define maxn2 100005
using namespace std;
int n,m;
int cunn[maxn1] = {0}; 
void init() {
	for(int i = 1; i < n; i++) {
		cunn[i] = i;
	}
}
int find(int x){
	if(x != cunn[x]) {
		cunn[x] = find(cunn[x]);
	}
	return cunn[x];
}

void union_set(int x, int y) {
	int xx = find(x);
	int yy = find(y);
	if(xx != yy) {
		cunn[yy] = xx;
	}
}



struct lu{
	int cun1,cun2,shi;
}luu[maxn2]; 

bool comp(lu a, lu b) {
	return a.shi < b.shi;
}
int main() {
	memset(luu, 0,sizeof(luu));
	int ans = 1,minn;
	cin >> n >> m;
	init();
	for(int i = 0; i < m; i++) {
		cin >> luu[i].cun1 >>luu[i].cun2 >>luu[i].shi;
	}
	sort(luu,luu + m,comp);
	for(int i = 0; i < m; i++) {
		if(find(luu[i].cun1) != find(luu[i].cun2)){
			ans++;
			minn = luu[i].shi;
			union_set(luu[i].cun1,luu[i].cun2);
		}
		if(ans == n) {
			cout << minn << endl;
			return 0;
		}		
	}
	cout << "-1" << endl;
	
	return 0;
} 
