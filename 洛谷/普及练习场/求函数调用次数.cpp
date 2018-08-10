
//求函数调用次数 
#include <iostream>
#include <string>
#include <queue>
#include <algorithm> 
using namespace std;

string m,s;
int n;
int dfs(string s) {
	if(s.length() == n) {
		return 0;
	}else if(s.length() > n) {
		return 100000;
	}	
	
	int step1,step2;
	string tem;

	tem = m;

	m = s;
	step1 = dfs(s + s) + 1;
	m = tem;

	step2 = dfs(s + m) + 1;
    m = tem;
    
	return min(step1,step2);

}

int main() {
	cin >> n;
	s.push_back('a');
	m = s;
	int step; 
    step = dfs(s);
	
	cout << step << endl;
	
	return 0; 
} 
