#include <iostream>
#include <string>
#include <queue>
#include <cstdio>
#include <string.h>
#define M 1010
using namespace std;
int n,m, x,y,sum;
string st;
int p1[M][M] = {0};//��ʼ������
int scc[M][M];//������..���ڵ��¼�� 
int bing[M*M];//hash���//�������ڵ�λ�� 
int xx[4] = {1,0,-1,0};//ת������
int yy[4] = {0,-1,0,1};

int bfs(int x, int y) {
	queue<int> q;
	int temp = 1; 
	q.push(x);
	q.push(y);
	bing[x*M+y] = x*M+y;//��¼���ڵ�//ͬʱ����߹� 
	while(!q.empty()) {
		int x1 = q.front();
		q.pop();
		int y1 = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {//4���������� 
			if(x1+xx[i] >= n || x1+xx[i] < 0 ||//�����ж� 
			   y1+yy[i] >= n || y1+yy[i] <0){
			   	continue;
			   }
			if(bing[(x1+xx[i])*M+(y1+yy[i])] == x*M+y){//�����߹��� bu zuo
			    continue; 
			}
			if(p1[(x1+xx[i])][(y1+yy[i])] != p1[x1][y1]){//nengzuode
				q.push(x1+xx[i]);//���� 
				q.push(y1+yy[i]);
				temp++;//����
				bing[(x1+xx[i])*M+(y1+yy[i])] = x*M+y;//��¼���ڵ�λ�� 
			}
		}
	}
	scc[x][y] = temp;//���ڵ���� 
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
//������� 
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
//	xx[x1] = x1;//���ڵ��¼���ڵ� 
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
			while(x2+w[i][0] < n && x2+w[i][0] >= 0 &&//�жϽ��� 
			      y2+w[i][1] < n && y2+w[i][1] >= 0 &&
//			      st1[(x2+w[i][0])][(y2+w[i][1])] == false&&//�ж��Ƿ��߹�  ��������������
                  //(xx[(x2+w[i][0])] != x1 ||yy[(y2+w[i][1])] != y1) &&//�Ƿ��¼�ڵ�
                  temp[(x2+w[i][0])*M+2+w[i][1]] != -1 &&//�Ƿ��߹� 
			      p1[(x2+w[i][0])][(y2+w[i][1])]!= p1[x2][y2]) {//�ж��Ƿ����� 
			      	
//				  st1[(x2+w[i][0])][(y2+w[i][1])] = true;//����߹� 
				  q.push(x2+w[i][0]);//������ 
				  q.push(y2+w[i][1]);// 
				  tmp++;//����
				  //xx[(x2+w[i][0])] = x1;//��¼���ڵ� 
				  //yy[(y2+w[i][1])] = y1;
				  temp[(x2+w[i][0])*M+2+w[i][1]] = x1*M+y1;//���ڵ�λ�� 
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
