/*************************************************************************
	> File Name: p1847.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月01日 星期五 19时42分41秒
 ************************************************************************/

#include <iostream>
using namespace std;
int m,n;
long long x1[2005],y1[2005],x2[2005],y2[2005];
long long x,y;
int ti = 0,ans = 0;
int main(){
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        ti = 0, ans = 0;
        for(int j = 1; j <= m; j++){
            if(x >= x1[j]&& x <= x2[j]&& y >= y1[j] && y <= y2[j]){
                ti++;
                ans = j;
            }
        }
        if(ti){
            cout << "YES" << " " << ti << " " << ans << endl;
        }else{
            cout << "NO" << endl;
        }
    }



    return 0;
}
