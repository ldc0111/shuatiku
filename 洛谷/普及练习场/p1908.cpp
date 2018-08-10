#include <iostream>

using namespace std;
int n;
int a[40003] = {0},c[40003] = {0};
long long ans = 0;
void fenzhi(int l,int r) {//cong xiao dao da
	int mid = (l + r)/2,i,j,tmp;
	if(r > l) {
		fenzhi(l,mid);
		fenzhi(mid + 1, r);
		tmp = l;
		for(i = l, j = mid + 1; i <= mid && j <= r;) {
			if(a[i] > a[j]) {
				c[tmp++] = a[j++];//guibing houshuzu
				ans += mid - i + 1;
			} else {
				c[tmp++] = a[i++];
			}
		}
		if(i <= mid) while(i <= mid) c[tmp++] = a[i++];
		if(j <= r) while (j <= r) c[tmp++] = a[j++];
		for(i = l; i <= r; i++) a[i] = c[i];
	}
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	fenzhi(1,n);
	cout << ans << endl;
	return 0;
}
