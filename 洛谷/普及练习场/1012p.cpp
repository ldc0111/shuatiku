#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
string a[20];
bool comp(string a,string b){
	return a + b > b + a;//b ¿ÉÄÜ¶Ì 
}
int main(){
	cin>> n;
	for(int i = 0;i < n; i++){
		cin>>a[i]; 
	}
	sort(a, a+n,comp);
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
	return 0;
}
