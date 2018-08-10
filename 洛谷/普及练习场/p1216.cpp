#include <iostream>

#define maxn 1003
using namespace std;
int a[maxn][maxn] = {0};
int R , max1 = 0;

int main() {
	cin >> R;
	for(int i = 1; i<=R; i++) {
		for(int j = 1; j <=i; j++) {
			cin >> a[i][j];
			a[i][j] += max(a[i- 1][j],a[i- 1][j - 1]);
			if(max1 < a[i][j]) {
				max1 = a[i][j];
			}
		}
	}
	cout << max1 << endl;
	return 0;
}
