#include <iostream>
#include <algorithm>
using namespace std;
int N,m;
int f[1000000] = {0};
struct wu {
	int v, p;
	int vp;
}a[30];
int main() {
	cin >> N >> m;
	for(int i = 1; i <= m; i++) {
		cin >> a[i].v >> a[i].p;
		a[i].vp  =a[i].v * a[i].p;
	}
	for(int i = 1; i <= m; i++) {
		for(int j = N; j >= a[i].v; j--) {// ×Ü½ð¶î 
			if(f[j - a[i].v] + a[i].vp >f[j])
			f[j] = f[j - a[i].v] + a[i].vp;
		}
	} 
	
	cout << f[N] << endl;
	
	return 0;
} 
