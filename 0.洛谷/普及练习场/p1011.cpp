#include <iostream>
using namespace std;

int ca[25] = {0,1,1,2},cb[25] = {0,0,0,0};
int a, b, n, m, x;
int main() {
	cin >> a >> n >> m >> x;
	for(int i = 4; i <= n; i++) {
		ca[i] = ca[i - 1] + ca[i - 2] - 1;
		cb[i] = cb[i - 1] + cb[i - 2] + 1; 
	} 
	
	b = (m-a*ca[n - 1])/cb[n - 1];
	
	cout << a*ca[x] +b * cb[x];
	return 0;
}
