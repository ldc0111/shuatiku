/*************************************************************************
	> File Name: p2006.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月26日 星期六 19时00分20秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

float k, m,n,shi,lan;
bool fl[30005];

int main(){
    cin >> k >> m >> n;
    for(int i = 1; i<= m;i++){
         cin >> lan >> shi;
        if(lan == 0||((int)(k/lan)) * shi >= n){
            fl[i] = true;
            fl[0] = true;
        }
    }
    if(fl[0]){
        for(int i = 1; i <= m;i++){
            if(fl[i]){
                cout << i << " ";
            }
        }
    }else{
        cout << -1;
    }

    return 0;
}
