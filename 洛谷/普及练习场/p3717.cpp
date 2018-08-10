/*************************************************************************
	> File Name: p3717.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月29日 星期二 20时00分45秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
bool a[105][105];
int n, m, r;
int x, y;
int ans = 0;
void tian(int x, int y){
    for(int i =  - r; i <=  r; i++){
        if(i + x > n|| i + x < 1) continue;
        for(int j =  - r; j <= r; j++){
            if(j + y > n || j + y < 1) continue;
            if(i*i + j*j <= r*r && !a[i + x][j + y]){
                 a[i + x][j + y] = true;
                 ans++;
            }
        }
    }
}


int main(){
    cin >> n >> m >> r;
    for(int i = 0; i < m; i++){
        cin  >> x >> y;
        tian(x,y);
    }
    cout << ans << endl;
    return 0;
}
