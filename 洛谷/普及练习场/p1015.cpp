#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
string m;
int n;
vector<int> a,b;

int main() {
	cin >> n >> m;
	for(int i = 0; i < m.length(); i++) {
		if(m[i] >= '0' && m[i] <= '9') a.push_back(m[i] - '0');
		else a.push_back(islower(m[i]) ? m[i] - 'a' + 10 : m[i] - 'A' + 10);
	}
	b = a;//copy
	reverse(a.begin(),a.end());//反转 a
	if(a == b) {
		cout << "STEP=0" << endl;
		return 0;
	}
	
	for(int step = 1; step <= 30; step++) {
		for(int i = 0,siz = a.size(); i < siz ; i++) {
			a[i] += b[i];//加法 
			if(i != siz - 1) a[i + 1] += a[i]/n;// 不等于情况下 
			else if(a[i] >= n) a.push_back(a[i]/n);//等于情况下 
			
			a[i] %= n;
		}
		b = a;
		reverse(b.begin() , b.end());
		if(a == b) {
			cout<< "STEP=" << step << endl;//pan 
			return 0;
		}
	}
	
	cout << "Impossible!" << endl;
	
	return 0;
}
