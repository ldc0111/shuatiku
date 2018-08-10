//跳板小游戏 

#include <iostream>
#include <algorithm>
#define maxn 10000

using namespace std;
int n,k,h;//nge ci    toiao
int  arr[maxn] = {0}; 
int main() {
	
	cin >> n >> k >> h;
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	sort(arr, arr + n);
	int hig = 0;
	int temp = 0;
	
	while(k--) {
		int i = temp;
		while(hig + h >= arr[i]&&i < n) i++;//第一个条不上的位置 
		
		if(i == temp && hig + h < arr[i]) {//跳不到下一个 
			break;
		} 
		//nengtiaodao
		hig += (arr[i - 1] - hig) * 2; 
		temp= i;
		 
	}
	cout << hig << endl;
	return 0; 
} 
