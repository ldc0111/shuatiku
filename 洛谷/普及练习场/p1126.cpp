#include <iostream>
#include <queue>
#define maxn 55
using namespace std;
int N,M;
int a[maxn][maxn] = {0};
int step = 0;
pair<int ,int> p1,p2;
char ch;
int bfs() {
	
}


int main() {
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}
	cin >> p1.first >> p1.second >> p2.first >> p2.second >> ch;
	bfs();
	
	
	
	return 0;
} 
