#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
int m,n,k,sum = 0;
struct hu{
	int x,y;
	int shu;
	bool operator < (const hu &a) const {
		return shu < a.shu;
	}
	void operator = (const hu &a)  {
		x = a.x;
		y = a.y;
		shu = a.shu;
	}
};


int main() {
	cin >> m >> n >> k;
	priority_queue<hu> qu;
	
	int temp;
	hu hutemp1,hutemp2;
	for(int i = 1; i <= m; i++) {
		for(int j = 1;j <= n; j++) {
			cin >> temp;
			if(temp != 0) {
				hutemp1.x = i;
				hutemp1.y = j;
				hutemp1.shu = temp;
				qu.push(hutemp1);
			}
		}
	}
	if(!qu.empty()){	
	hutemp1 = qu.top();
	qu.pop();
    }
	if(k < hutemp1.x*2 + 1) {
		cout << 0 << endl;
		return 0;
	}
	sum = hutemp1.shu;
	k = k - hutemp1.x - 1;
	if(!qu.empty()){
	hutemp2 = qu.top();
	qu.pop();		
	}
	while(k >= (abs(hutemp2.x -hutemp1.x) + abs(hutemp2.y - hutemp1.y) + 1 + hutemp2.x)) {
		sum += hutemp2.shu;
		k -= abs(hutemp2.x -hutemp1.x) + abs(hutemp2.y - hutemp1.y) + 1;
		
		hutemp1 = hutemp2;
		if(!qu.empty())   hutemp2 = qu.top();
		else break;
		qu.pop();
		
	}
	
	cout << sum << endl;
	
	return 0;
}
