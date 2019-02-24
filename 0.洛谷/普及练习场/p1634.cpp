/*************************************************************************
	> File Name: p1634.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月22日 星期二 18时51分40秒
 ************************************************************************/

#include <iostream>
using namespace std;
int x,n;
long long ans = 1;

int main(){
    cin >> x >> n;
    while(n--){
        ans +=ans*x;
    }
    cout << ans << endl;
    return 0;
}
