/*************************************************************************
	> File Name: p1150.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月22日 星期二 19时10分47秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n,k;
int flag = 0;
int ans = 0;
int main(){
    cin >> n >> k;
    ans = n;
    flag = n/k;
    while(flag){
        ans +=flag;
        n = n/k + n%k;
        flag = n/k;
        
    }
    cout << ans << endl;
    return 0;
}
