#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
string str;
int a[6] = {0};
int shuzi = 0;
string dic[30]={"zero","one","two","three","four","five","six","seven","eight",
              "nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen",
			   "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both",
			   "another","first","second","third"};//对应
int di[30]={0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
int zhuanhua(string & str){
	for(int i = 0; i < 30; i++){
		if(str == dic[i]){
			return di[i];
		}
	}
	return -1;
}
int main(){
	for(int i = 1; i <= 6; i++){
		cin >> str;
		for(int j = 0; j < str.length(); j++){
			if(str[j] < 'a'){
				str[j] += 32;
			}
		}
		int ans = zhuanhua(str);
		if(ans == -1){
			continue;
		} else{
			a[shuzi++] = ans;
		}
	}
	sort(a,a + shuzi);
	int temp = 0;
	for(int i = 0; i < shuzi; i++){
		if(a[i] == 0){//去掉的0 
			temp++;
		} else{
			break;
		}
	}
	for(int i = temp; i < shuzi; i++){
		if(i == temp){
			cout << a[i];
		} else if(a[i] == 0){//i != 0
		    cout << "00";
		} else if(a[i]  < 10){
			cout << "0"<< a[i];//bu 0
		} else {
			cout << a[i];
		}
	}
	if(shuzi == 0){
		cout << "0";
	}
	return 0;
} 
