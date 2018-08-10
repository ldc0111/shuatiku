#include <iostream>
#include <algorithm>
#define MAX int(3e5)+7
using namespace std;
struct arr{
	int l;
	int r;
	int value;
}array[MAX];

bool cmp(arr x, arr y) {
	if (x.l != y.l) {
		return x.l < y.l;
	} else if (x.l == y.l) {
		return x.r > y.r;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> array[i].l >> array[i].r;
		array[i].value = i + 1;
	}
	sort(array, array + n, cmp);
/*	for (int i = 0; i < n; ++i) {
		cout << array[i].l << " " << array[i].r << " " << array[i].value << endl;
	}*/
	for (int i = 1; i < n; ++i) {
		if (array[i].l >= array[i - 1].l && array[i].r <= array[i - 1].r) {
			cout << array[i].value << " " << array[i - 1].value;
			return 0;
		}
	}
	cout << "-1 " << "-1";
	return 0;
}
