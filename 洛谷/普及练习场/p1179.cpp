/*************************************************************************
	> File Name: p1179.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 11时46分32秒
 ************************************************************************/

#include <iostream>
using namespace std;
int l,r;
long long ans = 0;
int main(){
    cin >> l >> r;
    for(int i = l; i <= r;i++){
        int fl  = i;
        while(fl){
            if(fl%10 == 2){
                ans++;
            }
            fl/=10;
        }
    }
    cout << ans << endl;
    return 0;
}
