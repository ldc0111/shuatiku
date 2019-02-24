#include <iostream>
using namespace std;
int L,N;
int a;
int max1 = 0,min1 = 0;
int main() {
	cin >> L >> N;
	for(int i = 0; i < N; i++) {
		cin >> a;
		min1 = max(min1, min(a, L - a + 1));//保证全部走完 
		max1 = max(max1, max(a, L - a + 1));
	}
	
	cout << min1<< " " << max1 << endl; 
	
	return 0;
}


