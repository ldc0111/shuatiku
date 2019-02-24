/*************************************************************************
	> File Name: p2708.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月18日 星期六 18时07分01秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
//这个提 是吧i之前的都换成一个面的，并且遇见相邻
//的面不统计，因为已经一样，不需要统计
//最后判断最后一个是不是正面的，如果是正面的全体翻转一次
string str;
int ans = 0;
int main(){
    cin >> str;
    for(int i = 1; i < str.length(); i++){
        if(str[i] == str[i - 1]) continue;
        ans++;
    }
    if(str[str.length() - 1] == '0') ans++;
    cout << ans << endl;


    return 0;
}
