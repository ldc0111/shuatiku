#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main() {
	int n;
	string a[22];
	int b[22];
	int tmp = 0;
	int j = 0;
	string max; 
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
	}
	
	for(int i = 1; i <= n; i++) {//统计长度 
		b[i] = a[i].length();
	}
	for(int i = 1; i <= n; i++) {//找最大值//第一个最大值下表 
		if(tmp  < a[i].length()) {
			tmp = a[i].length();
			j = i;
		}
	}
	max = a[j];
	for(int i = j; i <=n; i++) {
		if(a[i].length() == tmp) {
			if(max < a[i]) {
				max = a[i];
				j = i;
			}
		}
	}
	printf("%d\n", j);
	cout << max << endl;
	return 0;
}
