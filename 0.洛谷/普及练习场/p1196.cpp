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
	front[x] += front[fa[x]];//���׽ڵ㵽���ľ��� 
	return fa[x] = fx;//����·�� 
}
int main() {
	init();
	cin >> t;
	
	while(t--) {
		int i,j;
		char ch;
		cin >> ch >> i >> j;
		int xx = find(i);//���ڵ� 
		int yy = find(j); //���ڵ� 
		if(ch == 'M') {//��xx��ӵ�y���� 
            front[xx] += sum[yy];
            sum[yy] += sum[xx];
            sum[xx] = 0;//���xx����
			fa[xx] = yy;//ָ�� 
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
