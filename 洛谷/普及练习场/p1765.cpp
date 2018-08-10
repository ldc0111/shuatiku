/*************************************************************************
	> File Name: p1765.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月26日 星期六 18时33分15秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string str;
int num[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int ans = 0;
int main(){
   getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        if(str[i] >= 'a'&& str[i] <= 'z'){
            ans += num[str[i] - 'a'];
        }
        if(str[i] == ' ') ans++;
    }
    cout << ans << endl;
    return 0;
}
