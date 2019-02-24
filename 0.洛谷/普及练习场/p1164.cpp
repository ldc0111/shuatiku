#include <iostream>

using namespace std;
int n,m;
int ans = 0;
int a[103] = {0};
void dfs(int m,int k) {
	if(m == 0) {
		ans++;
		return ;
	} else if(m < 0) {
		return ;
	}
	
	for(int i = k; i < n; i++) {
		dfs(m - a[i], i + 1);
	}
	
} 
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	dfs(m, 0);
	cout << ans << endl;
	return 0;
}
