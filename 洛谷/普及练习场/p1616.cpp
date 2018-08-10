#include <iostream>
#define maxn 100005

using namespace std;
int T,M;
struct y {
	int t1,v1;
}yao[maxn];
int f[maxn] = {0};


int main() {
	int temp = 0;
	cin >> T >> M;
	for(int i = 1; i <= M; i++) {
		cin >> yao[i].t1 >> yao[i].v1;
	}
	
	for(int i = 1; i <= M; i++) {
		int j;
		for(j = yao[i].t1; j <= T; j++) {
			f[j] = max(f[j], f[j - yao[i].t1] + yao[i].v1);
    		if(f[j] > temp) {
			    temp = f[j];
		    }			
		}

 	}
	cout << temp << endl;
		
	return 0;
} 
