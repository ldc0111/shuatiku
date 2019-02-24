/*************************************************************************
	> File Name: p2705.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月27日 星期日 10时45分00秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int r, b, c, d, e;
int ans = 0;
int main(){
    cin >> r >> b >> c >> d >> e;
    ans = r*c + b*d;
    if(r < b){
        ans = max(ans,2*r*e + (b - r)*d);
    }else{
        ans = max(ans,2*b*e + (r - b)*c);
    }
    cout << ans << endl;
}
