#include <iostream>
#include <cmath>
using namespace std;

string s;
char ch;
bool temp = true;
int main() {
	//���� 
	while(temp) {
		cin >> ch;
		if(ch >= 'A' && ch <= 'Z') {
			if(ch != 'E') {
				s.push_back(ch);
			} else {
				temp = false;
			}
		}
	}
	//11���� 
	int a = 0, b = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'W') {
			a++;
		} else {
			b++;
		}
		if((b >=11 || a >= 11) && abs(a - b) >= 2) {
			cout << a <<":" << b << endl;
			a = 0;
			b = 0;
		}	
	}
	cout << a << ':' << b << endl;
	cout << endl;
	
	//21���� 
	a = 0, b = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'W') {
			a++;
		} else {
			b++;
		}
		if((b >=21 || a >= 21) && abs(a - b) >= 2) {
			cout << a <<":" << b << endl;
			a = 0;
			b = 0;
		}	
	} 	
	cout << a << ':' << b << endl;	
	return 0;
}
