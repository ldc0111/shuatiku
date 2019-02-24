#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX_N 600
string str;
int ans[MAX_N] = {0},len;//lenjieguodechangdu



int main(){
	for(int i = 0; i < 2; i++){
		cin>> str;
		len = str.length();
		ans[0] = max(ans[0],len);
		for(int i = len - 1; i >= 0; i--){
			ans[len - i] +=str[i] -'0';
		}
	}
	for(int i = 1; i <= ans[0]; i++){
		if(ans[i] < 10) continue;
		ans[i + 1] += (ans[i] / 10);//高位 要进位 
		ans[i] %= 10;
		if(i+1 > ans[0]) ans[0]++;
	}
	for(int i = ans[0]; i > 0; i--){//高位往低位输 
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
} 
