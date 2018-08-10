/*************************************************************************
	> File Name: p2956.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 19时38分19秒
 ************************************************************************/

#include <iostream>
using namespace std;
int a,b,fj;
int aa,bb,cc,dd;
bool fl[250][250];
int ans = 0;

int main(){
    cin >> a >> b >> fj;
    for(int i = 0; i< fj;i++){
        cin >> aa >> bb >> cc >> dd;
        for(int i = aa; i<= cc;i++){
            for(int j = bb;j <=dd;j++){
                fl[i][j] = true;
            }
        }
    }
    for(int i = 1; i <= a;i++){
        for(int j = 1; j <= b;j++){
            if(fl[i][j] == true)    ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
