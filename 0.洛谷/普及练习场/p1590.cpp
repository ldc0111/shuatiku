/*************************************************************************
	> File Name: p1590.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月24日 星期四 20时23分53秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int i = 0; i < n;i++){
        int k = 0,ans =0;
        cin>> k;
        for(int i = 1; i<=k;i++){
            char str[30];
            sprintf(str,"%d",i);
            if(strchr(str,'7') == NULL) ans++;
        }
        cout << ans << endl;

    }

}
