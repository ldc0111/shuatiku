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
		p[x][y] = 0;//��Ϊ�ϰ�
		if(p[x][y+1]!= 0) {
			dfs(x,y+1);//���� 
			p[x][y+1] = 1;//�ݻ� 
		} 
		if(p[x+1][y]!= 0) {
			dfs(x+1,y);//���� 
			p[x+1][y] = 1;//�ݻ� 
		} 
		if(p[x][y-1]!= 0) {
			dfs(x,y-1);//���� 
			p[x][y-1] = 1;//�ݻ� 
		} 
		if(p[x-1][y]!= 0) {
			dfs(x-1,y);//���� 
			p[x-1][y] = 1;//�ݻ� 
		} 						
	}
	
}


int main() {
	scanf("%d%d%d",&n, &m, &t);
	scanf("%d%d%d%d",&sx, &sy, &lx, &ly);
	//�߽�ȫΪ�ϰ� 
	memset(p, 0,sizeof(p)); 
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= m;j++) {
			p[i][j] = 1;//keyizou
		}
	}
	for(i = 1; i <=t; i++) {
		scanf("%d%d",&x ,&y);
		p[x][y] = 0;//�ϰ� 
	}
	dfs(sx, sy);
	printf("%d\n",ans);
	return 0;
}


/*
bool p[10][10];//ģ���ͼ��1λ�ϰ���
int lx,ly,ans = 0;
int n, m, t,fx,fy,x,y;

void dfs(int x, int y, int sx, int sy) {
	if(x == lx && y == ly) {
		ans++;
		return ;
	}
	//��������
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
	scanf("%d%d%d",&n, &m, &t);//�� �� �ϰ�
	scanf("%d%d%d%d",&fx, &fy, &lx, &ly);
	memset(p,0,sizeof(p));
	
	for(int i = 1; i <= t; i++) {
		scanf("%d%d",&x,&y);
		p[x][y] = 1;//�����ϰ� 
	}
	dfs(fx, fy, fx, fy);//���� 
	
	printf("%d", ans); 
	
	return 0;
}*/
