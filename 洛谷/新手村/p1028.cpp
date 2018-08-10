#include <stdio.h>

int dp[1003] = {0};
int f(int n) {
	int i = 0;
	if(n <=1 ) {
		return 1;
	} else {
		for(int i = 2; i <= n; i++) {
			dp[i] = dp[i-2] + dp[i/2];
		}
	}
	
	return dp[n];
}

int main() {
	int n;
	dp [0] = 1;
	dp[1]  = 1;
	scanf("%d", &n);
	
	printf("%d\n", f(n));
	return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int f(int i)
{
    if ((i==0)||(i==1)) return 1;
    else return (f(i-2)+f(i/2));
}    
int main()
{
    long long n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
*/
