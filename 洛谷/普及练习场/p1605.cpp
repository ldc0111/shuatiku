#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;
bool p[10][10];
int ans = 0;
int sx,sy,lx,ly,x,y;
int i,j,n,m,t;

void dfs(int x,int y) {
	if(x == lx && y == ly) {
		ans++;
		return ;
	} else {
		p[x][y] = 0;//设为障碍
		if(p[x][y+1]!= 0) {
			dfs(x,y+1);//递推 
			p[x][y+1] = 1;//溯回 
		} 
		if(p[x+1][y]!= 0) {
			dfs(x+1,y);//递推 
			p[x+1][y] = 1;//溯回 
		} 
		if(p[x][y-1]!= 0) {
			dfs(x,y-1);//递推 
			p[x][y-1] = 1;//溯回 
		} 
		if(p[x-1][y]!= 0) {
			dfs(x-1,y);//递推 
			p[x-1][y] = 1;//溯回 
		} 						
	}
	
}


int main() {
	scanf("%d%d%d",&n, &m, &t);
	scanf("%d%d%d%d",&sx, &sy, &lx, &ly);
	//边界全为障碍 
	memset(p, 0,sizeof(p)); 
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= m;j++) {
			p[i][j] = 1;//keyizou
		}
	}
	for(i = 1; i <=t; i++) {
		scanf("%d%d",&x ,&y);
		p[x][y] = 0;//障碍 
	}
	dfs(sx, sy);
	printf("%d\n",ans);
	return 0;
}


/*
bool p[10][10];//模拟地图（1位障碍）
int lx,ly,ans = 0;
int n, m, t,fx,fy,x,y;

void dfs(int x, int y, int sx, int sy) {
	if(x == lx && y == ly) {
		ans++;
		return ;
	}
	//上下左右
	if(x-1 > 0 && x-1 !=sx && p[x-1][y] < 1) {
		dfs(x-1,y,x,y);
	} 
	if(y-1 > 0 && y-1 != sy && p[x][y-1] < 1) {
		dfs(x, y-1, x, y);
	}
	if(x+1 <= m&& x+1 !=sx && p[x+1][y] < 1) {
		dfs(x+1,y,x,y);
	} 
	if(y+1 <= m && y+1 != sy && p[x][y+1] < 1) {
		dfs(x, y+1, x, y);
	}
	
}

int main() {
	scanf("%d%d%d",&n, &m, &t);//行 列 障碍
	scanf("%d%d%d%d",&fx, &fy, &lx, &ly);
	memset(p,0,sizeof(p));
	
	for(int i = 1; i <= t; i++) {
		scanf("%d%d",&x,&y);
		p[x][y] = 1;//设置障碍 
	}
	dfs(fx, fy, fx, fy);//神搜 
	
	printf("%d", ans); 
	
	return 0;
}*/
