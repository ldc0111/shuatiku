#include <iostream>
#include <string>
#include <queue>
#include <cstdio>
#include <string.h>
#define M 1010
using namespace std;
int n,m, x,y,sum;
string st;
int p1[M][M] = {0};//初始话数组
int scc[M][M];//答案数组..父节点记录答案 
int bing[M*M];//hash并差集//保留父节点位置 
int xx[4] = {1,0,-1,0};//转像数组
int yy[4] = {0,-1,0,1};

int bfs(int x, int y) {
	queue<int> q;
	int temp = 1; 
	q.push(x);
	q.push(y);
	bing[x*M+y] = x*M+y;//记录父节点//同时标记走过 
	while(!q.empty()) {
		int x1 = q.front();
		q.pop();
		int y1 = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {//4个方向搜索 
			if(x1+xx[i] >= n || x1+xx[i] < 0 ||//界限判断 
			   y1+yy[i] >= n || y1+yy[i] <0){
			   	continue;
			   }
			if(bing[(x1+xx[i])*M+(y1+yy[i])] == x*M+y){//本次走过的 bu zuo
			    continue; 
			}
			if(p1[(x1+xx[i])][(y1+yy[i])] != p1[x1][y1]){//nengzuode
				q.push(x1+xx[i]);//进队 
				q.push(y1+yy[i]);
				temp++;//计数
				bing[(x1+xx[i])*M+(y1+yy[i])] = x*M+y;//记录父节点位置 
			}
		}
	}
	scc[x][y] = temp;//父节点记数 
	return temp;
}

int main() {
	memset(bing, -1,sizeof(bing));
	scanf("%d %d",&n, &m);
	for(int i = 0; i < n; i++) {
		cin>> st;
		for(int j = 0; j < st.length(); j++) {
			p1[i][j] = st[j]-'0';
		}
	}
	for(int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		x--; y--;
		if(bing[x*M+y] != -1) {
			printf("%d\n",scc[(bing[x*M+y]/M)][(bing[x*M+y]%M)]);
		} else {
			printf("%d\n",bfs(x,y));
		}
	}
}
//错误代码 
/*
#include <iostream>
#include <string>
#include <queue>
#include <cstdio>
#include <string.h>
#define M 1010
using namespace std;
int n,m, x,y,sum;
string st;
int p1[M][M] = {0};
//bool st1[1010][1010];
int scc[M][M];
//int xx[1010] = {0}, yy[1010] = {0};
int temp[M*M] = {0};
int w[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};
int bfs(int x1, int y1){
	int tmp = 0;
	queue<int> q;
    int x = x1;
	int y = y1;
	
//	st1[x][y] = true;
	tmp++;
//	xx[x1] = x1;//父节点记录父节点 
//	yy[y1] = y1;	
	temp[x1*M+y] = x1*M+y;
	q.push(x);
	q.push(y);
	while(!q.empty()) {
		int x2 = q.front();
		q.pop();
		int y2 = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {
			while(x2+w[i][0] < n && x2+w[i][0] >= 0 &&//判断界限 
			      y2+w[i][1] < n && y2+w[i][1] >= 0 &&
//			      st1[(x2+w[i][0])][(y2+w[i][1])] == false&&//判断是否走过  ？？？？？？？
                  //(xx[(x2+w[i][0])] != x1 ||yy[(y2+w[i][1])] != y1) &&//是否记录节点
                  temp[(x2+w[i][0])*M+2+w[i][1]] != -1 &&//是否走过 
			      p1[(x2+w[i][0])][(y2+w[i][1])]!= p1[x2][y2]) {//判断是否能走 
			      	
//				  st1[(x2+w[i][0])][(y2+w[i][1])] = true;//标记走过 
				  q.push(x2+w[i][0]);//进队列 
				  q.push(y2+w[i][1]);// 
				  tmp++;//计数
				  //xx[(x2+w[i][0])] = x1;//记录父节点 
				  //yy[(y2+w[i][1])] = y1;
				  temp[(x2+w[i][0])*M+2+w[i][1]] = x1*M+y1;//父节点位置 
			}
		}
		
	}

	scc[x1][y1] = tmp;
	return tmp;
}

int main() {
//	memset(scc, -1,sizeof(scc));
	memset(temp, -1,sizeof(temp));
	scanf("%d %d",&n, &m);
	for(int i = 0; i < n; i++) {
		cin>> st;
		for(int j = 0; j < st.length(); j++) {
			p1[i][j] = st[j]-'0';
		}
	}
	for(int i = 0; i < m; i++) {
 
		scanf("%d %d", &x, &y);
		x--,y--;
		//if(st1[x-1][y-1] == true) {
		//	printf("%d\n",scc[xx[x-1]][yy[y-1]]);
		if(temp[x*M+y]!= -1){
			printf("%d\n",scc[(temp[x*M+y]/M)][(temp[x*M+y]%M)]);
		} else {
//			memset(st1, 0,sizeof(st1)); 
			printf("%d\n", bfs(x,y));
		}
	}
    return 0;
} 
*/
