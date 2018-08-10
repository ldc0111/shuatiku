#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
char a[102][102];
bool c[102][102];
char b[6] = {'i','z','h','o','n','g'};
int e[8][2] = {0,1,   1,1,  1,0,  1,-1,
               -1,1, -1,0, -1,-1, 0,-1,};//相反方向 
               
int n,i,j,k;
//比等于6找到结束
void  ranse(int x, int y,int k,int i) {
	if(k >= 7) return ;
	c[x][y] = 1;
	ranse(x+e[i][0], y+e[i][1], k+1, i);
}
void  dfs(int x,int y,int di, int i) {
	if(di >= 6) {
		ranse(x,y,0,7-i);
		return ;
	}
	
	if(x + e[i][0] >=0 &&x + e[i][0] <= n &&
	   y + e[i][1] >=0 &&y + e[i][1] <= n &&
	   a[(x+e[i][0])][(y+e[i][1])] == b[di]) {
	   	dfs(x+e[i][0],y+e[i][1],di+1,i);
	   }
}
void dfs2() {
	for(k = 0; k < n; k++){
		for(j = 0; j < n;j++) {
			if(a[k][j] == 'y') {
				for(i = 0;i <8; i++) {
					dfs(k, j, 0, i);
				}
			}
			
		}
	}	
}

int main() {
	memset(a, '0',sizeof(a));
	memset(c, 0, sizeof(c));//不是需要的数据为0 
	scanf("%d",&n);
	for(i = 0; i < n; i++) {
		scanf("%s",a[i]);
	}	
	 
	dfs2();
	for(i = 0; i < n; i++) {
		for(j = 0;j < n; j++) {
			if(c[i][j]) {
				printf(j == (n-1)?"%c\n":"%c",a[i][j]);
			} else {
				printf(j == (n-1)?"*\n":"*");
			}
		}
	}
	
	
	return 0;
}

/*
qyizhong
gydthkjy
nwidghji
orbzsfgz
hhgrhwth
zzzzzozo
iwdfrgng
yyyygggg
*/
