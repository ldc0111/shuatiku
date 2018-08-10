#include <iostream>
#include <string.h>
#define maxn 100005
using namespace std;
int n,k;
int dp[maxn] = {0};

int f(int n) {
	if(n <= 1) {
		return 1;
	}
	int sum = 0;
	if(dp[n] != 0) {
		return dp[n];
	}
	for(int i = 1; i <= k&&n - i >= 0; i++) {
		sum += f(n - i);
	}
	sum %= 100003;
	dp[n] = sum;
	
	
	return dp[n]; 
}
int main() {
	memset(dp,0,sizeof(dp));
	cin >> n >> k;
	
	f(n);
	
	cout << dp[n] << endl;
	return 0;
}
