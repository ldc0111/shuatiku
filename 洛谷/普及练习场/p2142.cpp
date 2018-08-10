#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
#define MAN_N 20000
using namespace std;
int ans[MAN_N] = {0},len;
string a,b;
bool tem = true;
int main(){
	cin >> a >> b;
	memset(ans,0,sizeof(a)); 
	if(a.length() < b.length()|| (a.length() == b.length()&&a < b)){
		tem = false;
		swap(a,b);
		cout << "-";
	}
/*
1354354
1521325
*/	
	len = a.length();
	for(int i = 0; i < a.length(); i++){//dao zhi
		ans[len -1 - i] = a[i] - '0'; 
	}
	
	len = b.length();
	for(int i = 0; i< b.length(); i++){
		if(ans[i] < b[len -1 - i] - '0'){//xiao 
			ans[i + 1]--;
			ans[i] += 10 -(b[len -1 - i] - '0');
		} else {//da
			ans[i] -= b[len - 1 - i] - '0';
		}
	} 
/*
1000023456
34567
*/	
	if(ans[b.length()] < 0){
		for(int i = b.length(); i < a.length(); i++){
			if(ans[i] < 0){
				ans[i + 1]--;
				ans[i] += 10;
			}
		}
	}
	len = a.length() - 1;//len biaoshi xia biao
	while(ans[len] == 0 && len >0) len--;
	for(int i = len; i>= 0; i--){
		printf("%d", ans[i]);
	}
	printf("\n");
	return 0;
} 
