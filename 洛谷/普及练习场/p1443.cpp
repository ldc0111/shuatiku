#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>
using namespace std;
int n, m;
int x, y;

int step[8][2] = {{1,2},{2,1},{2,-1},{1,-2},
            {-1,-2},{-2,-1},{-2,1},{-1,2}};
int p[410][410] = {0};
queue <int>q;
int bfs(int x, int y) {
	q.push(x);
	q.push(y);
	
	while(!q.empty()){
		int x1 =  q.front();
		q.pop();
		int y1 = q.front();
		q.pop();
		
		for(int i = 0; i < 8; i++) {
		    if(x1 + step[i][0] <= n && x1 + step[i][0] >=1 &&
		       y1 + step[i][1] <= m && y1 + step[i][1] >= 1) {
		        	if(p[(x1+step[i][0])][(y1 + step[i][1])] == -1) {//第一次 
		   		        p[(x1+step[i][0])][(y1 + step[i][1])] = p[x1][y1]+1;
		   		        q.push(x1 + step[i][0]);
		   		        q.push(y1 + step[i][1]);
			        } else if(p[(x1+step[i][0])][(y1 + step[i][1])] < p[x1][y1]-1){//接下来
			            p[(x1+step[i][0])][(y1 + step[i][1])] = p[x1][y1]+1;
		   		        q.push(x1 + step[i][0]);
		   		        q.push(y1 + step[i][1]);			        
		           }
		       }			
			
		}
    }
}


int main() {
	scanf("%d %d %d %d",&n, &m, &x, &y);
	memset(p,-1,sizeof(p));
	p[x][y] = 0;
	bfs(x,y);
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			printf("%-5d", p[i][j]);
		}
		printf("\n");
	} 
}
