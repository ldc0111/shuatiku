/*************************************************************************
	> File Name: p1789.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月25日 星期五 10时28分58秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int n,m,k,ans = 0;
int x[1000],y[1000];
bool fl[1002][1002];
int main(){
    cin >> n >> m >> k;
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    for(int i = 1 ;i <=m+k;i++){
        cin >>x[i] >> y[i];
        if(i <= m){
            fl[x[i]+2][y[i]] = fl[x[i] -2][y[i]] = fl[x[i]][y[i] - 2] = fl[x[i]][y[i] + 2] = true;
            for(int j = -1 ; j <=1;j++){
                for(int k = - 1; k <= 1;k++){
                    fl[x[i] + j][y[i] + k] = true;
                }
            }
        } else{
            for(int j = -2; j <= 2; j++) {
                for(int k = -2; k <= 2; k++){
                    fl[x[i] + j][y[i] + k] = true;
                }
            }
        }
    }
     
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
            if(!fl[i][j]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
