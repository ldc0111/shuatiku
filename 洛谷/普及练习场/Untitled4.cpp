#include <iostream>

using namespace std;
int n;
int b,maxn = 0;
bool zhi(int x) {//ÖÊÊıÅĞ¶Ï 
	for(int i = 2; i*i <= x; i++) {
		if(!(x % i)) {
			return false;
		}
	}
	return true;
}

int main() {
	cin >> n;
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0) {
			if(zhi(i)) {
	           cout << n/i << endl;
	           return 0;
			}
		}
	}	
	return 0;
}
