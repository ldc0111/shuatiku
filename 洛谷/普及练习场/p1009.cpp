#include <iostream>


using namespace std;
int a[120] = {1}, b[120] = {0};
int s,temp = 1;

void jiechen(int x) {
	for(int i = 0; i < temp; i++) {
		a[i] *= x;
	}
	for(int i =0; i < temp; i++) {
		if(a[i]/10) {
			a[i + 1] += a[i]/10;
			if(i == temp - 1) temp++; 
		}
		a[i] %= 10;		
	}
}

void jiejia() {
	for(int i = 0; i < temp; i++) {
		b[i] += a[i];
	}
	for(int i =0; i < temp; i++) {
		if(b[i]/10) {
			b[i + 1] += 1;;
			if(i == temp - 1) temp++; 
		}
		b[i] %= 10;		
	}
}

int main() {
	cin >> s;
	
	for(int i =  1; i <= s; i++) {
		jiechen(i);
		jiejia();
	}
	
	for(int i = temp - 1; i >= 0; i--) {
		cout << b[i];
	} 
	cout << endl;
	return 0;
} 
