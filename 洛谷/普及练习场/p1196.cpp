#include <iostream>
#include <cmath>
#define maxn 30001

using namespace std;
int fa[maxn],front[maxn],sum[maxn],t;

void init(){
	for(int i = 0; i < maxn; i++){
		fa[i] = i;
		front[i] = 0;
		sum[i] = 1;
	}
}

int find(int x) {
	if(fa[x] == x) return fa[x];
	int fx = find(fa[x]);
	front[x] += front[fa[x]];//父亲节点到跟的距离 
	return fa[x] = fx;//减短路径 
}
int main() {
	init();
	cin >> t;
	
	while(t--) {
		int i,j;
		char ch;
		cin >> ch >> i >> j;
		int xx = find(i);//根节点 
		int yy = find(j); //根节点 
		if(ch == 'M') {//吧xx添加到y后面 
            front[xx] += sum[yy];
            sum[yy] += sum[xx];
            sum[xx] = 0;//清空xx队列
			fa[xx] = yy;//指向 
		} else {//ch == 'c'
			if(xx == yy) {
				cout << abs(front[i] - front[j]) - 1 << endl;
			} else {
				cout << "-1" << endl;
			}
		}
	}
	
	return 0;
} 
