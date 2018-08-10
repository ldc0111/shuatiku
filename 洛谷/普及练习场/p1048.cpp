#include <iostream>
#define  maxn 1006
using namespace std;

int T, M;
struct y {
	int t1,v1;
}yao[maxn];
int f[maxn] = {0};
int main() {
	cin >> T >> M;
	for(int i = 1; i <= M; i++) {
		cin >> yao[i].t1 >> yao[i].v1;
	}
	
	for(int i = 1; i <= M; i++) {
		for(int j = T; j >= yao[i].t1; j--) {
			f[j] = max(f[j],f[j - yao[i].t1] + yao[i].v1);
		}
	}
	cout << f[T] << endl;
	return 0;
} 
