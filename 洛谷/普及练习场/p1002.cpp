#include <iostream>
#include <cstdio>


using namespace std;

const int arr[2][9] =  {{0,-2,-1,1,2,2,1,-1,-2},{0,1,2,2,1,-1,-2,-2,-1}};
long long dp[22][22] = {1};
bool mark[21][21];

int main() {
	int nx,ny,hx,hy;
	cin >> nx >> ny >> hx >> hy;
	for(int i = 0; i < 9; i++) {
		if(hx + arr[0][i] >= 0 && hx + arr[0][i] <= nx &&
		   hy + arr[1][i] >= 0 && hy + arr[1][i] <= ny)
		mark[hx +arr[0][i]][hy + arr[1][i]] = 1;
	}
	
	for(int i = 0; i <= nx; i++) {
		for(int j = 0; j <= ny; j++) {
			if(i) dp[i][j] += dp[i -1][j];
			
			if(j) dp[i][j] += dp[i][j - 1];
			
			dp[i][j] *= !mark[i][j]; 
		}
	}
	
	cout << dp[nx][ny] << endl;
	
	return 0; 
}
 
