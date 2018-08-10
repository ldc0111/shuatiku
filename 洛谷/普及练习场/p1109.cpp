/*************************************************************************
	> File Name: p1109.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月15日 星期二 22时32分25秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[55];
int l,r;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> l >> r;
    int sum = 0;
    for(int i= 0; i< n; i++){
        sum += a[i];
    }
    if(sum < n*l || sum > n*r){
        cout << -1;
        return 0;
    }
    int ll = 0,rr = 0;
    for(int i = 0; i < n;i++){
        if(a[i] < l){
            ll += l - a[i];
        } else if(a[i] > r){
            rr += a[i] - r;
        }
    }
    cout << max(ll,rr) << endl;
    return 0;
}
