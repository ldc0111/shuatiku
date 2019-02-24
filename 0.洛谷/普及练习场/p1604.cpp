#include <iostream>
#include <string>
#include <cstdio>
#define MAX_N 2002
//  直接存数就行 处理一下输出 
using namespace std;
string str;
int ans[MAX_N] = {0},len,biao;
int B;

int main(){
	 cin >> B;
	 cin >> str;
	 len = str.length();
	 biao = len - 1;
	 for(int i  = 0; i < str.length(); i++){
	 	if(str[len - 1 - i] >= 'A'){
	 		str[len - 1 - i] = str[len - 1 - i] - 'A' + 10;
		 } else {
		 	str[len - 1 -i] = str[len - 1 - i] - '0';
		 }
	 	ans[i] = str[len - 1 - i];// daozhi
	 }
	 cin >> str;
	 len = str.length();
	 if(biao < len - 1){
	 	biao = len - 1;
	 }
	 for(int i = 0; i < str.length(); i++){
	 	if(str[len - 1 - i] >= 'A'){
	 		str[len - 1 - i] = str[len - 1 - i] - 'A' + 10;
		 } else {
		 	str[len - 1 -i] = str[len - 1 - i] - '0';
		 }
		 ans[i + 1] += (ans[i] + (int)str[len - 1 - i])/B;
		 ans[i] = (ans[i] + (int)str[len - 1 - i])%B;
	 }
	 
	if(ans[biao + 1] != 0){
	    biao ++;
    }
	 while(ans[biao] == 0 && biao > 0) biao--;
	 for(int i = biao; i >= 0; i--){
	 	if(ans[i] < 10){
	 		printf("%d",ans[i]);
		 } else {
		 	printf("%c",ans[i] - 10 +'A');
		 }
	 } 
	 printf("\n");
	 return 0;
}
