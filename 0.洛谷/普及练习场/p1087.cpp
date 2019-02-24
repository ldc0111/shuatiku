#include <iostream>
#include <string>

using namespace std;
string st;
int n;
char hou(string st){
	char L,R;
	if(st.length() == 1){
		cout << st[0];
		return st[0];
	}
	L = hou(st.substr(0,st.length()/2));
	R = hou(st.substr(st.length() / 2,st.length() / 2));
	if(L == R){
		cout << L;
		return L;
	} else {
		cout << 'F';
		return 'F';
	}
}
int main(){
	
	cin >> n ;
	if(n == 0) {
		return 0;
	}
	cin >> st;
	for(int i = 0; i < st.length(); i++){
		if( st[i] == '1' ){
			st[i] = 'I';
		} else {
			st[i] = 'B';
		}
	}
	hou(st.substr(0,st.length()));
	
	return 0;
}
