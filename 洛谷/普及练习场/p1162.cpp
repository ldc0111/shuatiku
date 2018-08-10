#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;
int n;
int p[40][40];
bool vis[40][40];

queue<int> q;//bfs���� 
int l[4] = {1,-1,0,0};
int r[4] = {0,0,1,-1};
void bfs(int x, int y){
	vis[x][y] = 1;
	q.push(x);
	q.push(y);
	while(!q.empty()){//�ǿ�
	    int w = q.front();//w = x ;
		q.pop();
		int e = q.front();// e = y;
		q.pop();
		if(p[w+1][e] == 0 && w!= n && !vis[w+1][e]) {//xia
			vis[w+1][e] = 1, q.push(w+1),q.push(e);
		}
		if(p[w-1][e] == 0 && w!= 1 && !vis[w-1][e]) {
			vis[w-1][e] = 1, q.push(w-1), q.push(e);
		}
		if(p[w][e+1] == 0 && w!= n && !vis[w][e+1]) {
			vis[w][e+1] = 1, q.push(w), q.push(e+1);
		}
		if(p[w][e-1] == 0 && w!= 1 && !vis[w][e-1]) {
			vis[w][e-1] = 1, q.push(w), q.push(e-1);
		}				
	} 
}

int main() {
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			scanf("%d", &p[i][j]);
			if(p[i][j] == 1) {
				vis[i][j] = 1;//���һ �� 
			} 
		}
	}
	for(int i = 1; i <= n; i = i + n-1) {//�߽�ö�� 
		for(int j = 1; j <= n; j++) {
			if(vis[i][j]) continue;
			bfs(i,j); 
		}
	}
	for(int i = 1; i <= n; i = i + n-1) {//�߽�ö�� 
		for(int j = 1; j <= n; j++) {
			if(vis[j][i]) continue;//��ǹ��˳� 
			bfs(j,i); //0 �Ľ�ȥ 
		}
	}
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n;j++) {
			if(!vis[i][j]) printf("2 ");//û�б����Ϊ1�е�0 
			else printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}

