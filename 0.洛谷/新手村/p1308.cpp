#include <iostream>
#include <string>

using namespace std;
int main() {
	string a, b;
	int index1,index;
	int tmp = 0;
	getline(cin, a);
	getline(cin, b);
	
	for(int i = 0; i <a.length(); i++) {
		a[i] = tolower(a[i]);
	}
	for(int i = 0; i < b.length(); i++){
		b[i] = tolower(b[i]);
	}
	
	a = ' ' + a + ' ';
	b = ' ' + b + ' ';
	
	if(b.find(a) == string::npos) {
		cout << -1 << endl; 
	} else {
		index1 = index = b.find(a);
		tmp = 0;
		
		while(index != string::npos) {
			tmp++;
			index = b.find(a,index+1);
		}
		cout << tmp << ' ' << index1 << endl;
		
	}
	return 0;
}
