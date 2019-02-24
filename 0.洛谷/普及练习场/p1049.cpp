#include <iostream>
#define maxn 20005

using namespace std;
int V,N;
int a[35];
int f[maxn] = {0};
int main() {
	cin >> V >> N;
	for(int i = 1; i <= N; i++) {
		cin >> a[i];
	}
	for(int i = 0; i<= V; i++) {
		f[i] = V;
	}
	
	for(int i = 1; i <= N; i++) {
		for(int j = V; j >= a[i]; j--) {
			f[j] = min(f[j],f[j - a[i]] - a[i]);
		}
	}
	
	cout << f[V] << endl;
	return 0;
}
