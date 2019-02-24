/*************************************************************************
	> File Name: p1887.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月26日 星期六 18时42分30秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n,m;
int main(){
    cin >> n >> m;
    if(n%m == 0){
        for(int i = 0; i < m;i++){
            cout << n/m << " ";
        }
    }else{
        for(int i = 0; i < m - n%m;i++){
            cout << n/m << " ";
        }
        for(int i = m - n%m; i < m;i++){
            cout << n/m + 1 << " ";
        }
    }

    return 0;
}
