#include <iostream>
#include <string>
using namespace std;
long long b, p, k, a;

long long kuai(int b, int p) {
	long long r,base = b;
	while (p != 0) {
		if(p%2) r = (r *base) % k;
		base =(base* base) % k;
		p /= 2;
	}
	
	return r;
}
int main() {
	cin >> b >> p >> k;
	a = kuai(b,p);
	cout << b << "^" << p << " mod " << k << "=" << a << endl;
	return 0;
}
