/*************************************************************************
	> File Name: p1614.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月05日 星期二 19时05分10秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, m, a[3005];
int sum = 0, ans, i;

int main(){
    cin >> n >> m;
    for ( i = 1; i <= m; i++){
        cin >> a[i];
        sum += a[i];
    }
    ans = sum;
    for(   ;i <= n; i++){
        cin >> a[i];
        sum = sum - a[i - m] + a[i];
        ans = min(ans,sum);
    }
    cout << ans << endl;

    return 0;
}
