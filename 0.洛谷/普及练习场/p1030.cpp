#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string str1,str2;
void tree(string  str1,string str2) {
	if(str1.size() > 0){
		char ch = str2[str2.length() - 1];
		cout << ch;
		int k = str1.find(ch);
		tree(str1.substr(0,k), str2.substr(0,k));
		tree(str1.substr(k + 1), str2.substr(k, (str1.length() - k - 1)));
	}
} 
int main(){
	cin >> str1 >> str2;
	tree(str1,str2);
	cout << endl;
	return 0;
}
