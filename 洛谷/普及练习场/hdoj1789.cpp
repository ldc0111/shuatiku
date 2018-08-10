#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define maxn 1010


#include <iostream>
#include <queue>
#include <cstdio>
#include <functional>

using namespace std;

bool vis[maxn],used[maxn];
struct stu{
	int jiezhi;
	int fen;
};

int t,n;
stu a[maxn];
bool cmp(stu a, stu b) {
    return a.fen > b.fen;
}

int main() {
	cin >> t;
	memset(a,0,sizeof(a));
	while(t--) {
        memset(vis, false, sizeof(vis));
        memset(used, false, sizeof(used));		
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i].jiezhi;
		}
		for(int i = 0; i < n; i++) {
			cin >> a[i].fen;
		}
		sort(a,a + n,cmp);
		
		for(int i = 0;i < n; i++) {
			for(int j = a[i].jiezhi; j >= 1; j--) {
				if(!vis[j]) {
					vis[j] = true;
					used[i] = true;
					break;
				}
			}
		}
		
		int sum = 0;
		for(int i = 0; i < n; i++) {
			if(!used[i]) sum += a[i].fen;
		}
		
		
		cout << sum << endl;
	
	
    } 
    return 0;
}
