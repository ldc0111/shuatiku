#include <iostream>


using namespace std;

int x0,y0;
int ans = 0;


bool gong(int a, int b) {
	int a1 = a,b1 = b;
	if(a1 < b1)  swap(a1,b1);
	
	int c1;
	while(b1 != 0) {
		c1 = a1%b1;
		a1 = b1;
		b1 = c1;
	}
	if(a1 == x0&& y0 == a*b/x0) {
		return true;
	}
	
	return false;
}
int main() {
	cin >> x0 >> y0;
	
	for(int i =  x0; i <= y0; i += x0) {
		for(int j = x0; j <= y0; j+= x0) {
			if(y0%j == 0 && gong(i,j)) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}
