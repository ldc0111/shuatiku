/*************************************************************************
> File Name: p2415.cpp
> Author:
> Mail: 
> Created Time: 2018年06月01日 星期五 20时11分34秒
************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
long long ans,lin;
long long s[30];
int main(){
    int i = 0;
    while(cin >> s[i++]);
    for(int j = 0; j < i;j++ ) ans += s[j];
    ans *=pow(2,i - 2);
    cout << ans << endl;
    return 0;
}
