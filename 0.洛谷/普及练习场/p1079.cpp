#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string k,c;
int main() {
	cin >> k;
	cin >> c;
	transform(k.begin(), k.end(),k.begin(), ::tolower);

	
	while(k.length() < c.length()) k += k;
	
	for(int i = 0; i < c.length(); i++) {
		int a = k[i] - 'a';
		if(c[i] < 'a') {
			c[i] -= a;
			if(c[i] < 'A') c[i] += 26;
		} else {
			c[i] -= a;
			if(c[i] < 'a') c[i] += 26;
		}
		
		
	}
	
	cout << c << endl;
	return 0;
}
