/*************************************************************************
	> File Name: p1888.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月17日 星期四 20时03分07秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b,c,mi = 100000007,ma = 1,gc;
     cin >> a >> b >> c;
    mi = min(a,b);
    mi = min(mi,c);

    ma = max(a,b);
    ma = max(ma,c);
    gc =gcd(ma,mi);
    cout << mi/gc << "/" << ma/gc << endl;
    return 0;
}
