#include <iostream>
#include <algorithm>
#define maxn 32005
#define maxn2 32005
using namespace std;
int n, m;
int v,p,q;
int  zhuv[maxn2] = {0};
int  zhuvp[maxn2] = {0};
int  fuv[maxn2][3] = {0};//fuv[q][0]存储的是个数 
int fuvp[maxn2][3] = {0};
int f[maxn] = {0};

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> v >> p >> q;
		if(!q) { // 为主件 
			zhuv[i] = v;
			zhuvp[i] = v*p; 
		} else {//为附件 
			fuv[q][0]++;//附件个数 
			fuv[q][fuv[q][0]] = v;
			fuvp[q][fuv[q][0]] = v*p;
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = n; zhuv[i] != 0 && j >= zhuv[i]; j--) {// 因为主辅分开，有些zhuv[i] == 0
		     f[j] = max(f[j], f[j - zhuv[i]] + zhuvp[i]);
		     
			 if(j >= zhuv[i] + fuv[i][1]) {   
			      f[j] = max(f[j], f[j - zhuv[i] - fuv[i][1]] + zhuvp[i] + fuvp[i][1]);
		     }
		     
			 if(j >= zhuv[i] + fuv[i][2]) {
			 	  f[j] = max(f[j], f[j - zhuv[i] - fuv[i][2]] + zhuvp[i] + fuvp[i][2]);
			 }
			 
			 if(j >= zhuv[i] + fuv[i][1] + fuv[i][2]) {
			 	  f[j] = max(f[j], f[j - zhuv[i] - fuv[i][1] - fuv[i][2]] + fuvp[i][1] + fuvp[i][2]);
			 }
		} 
	}
	
	cout << f[n] << endl;
	return 0;
}
