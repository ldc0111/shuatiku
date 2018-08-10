/*************************************************************************
	> File Name: p4445.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月01日 星期五 19时31分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
long long ans;
long long zhe = 0,shang = 0;;
int n;
int main(){
    cin >> n;
    cin >> shang;
    for(int i = 1; i < n; i++){
        cin >> zhe;
        ans += max(shang,zhe);
        shang = zhe;
    }

    cout << ans << endl;
    return 0;
}
