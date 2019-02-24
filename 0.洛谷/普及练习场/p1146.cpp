/*************************************************************************
> File Name: p1146.cpp
> Author:
> Mail: 
> Created Time: 2018年06月05日 星期二 18时33分51秒
************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int n,fl = -1;

    cin >> n;
    cout << n << endl;
    for (int i = 1;i <= n; i++) {
        for (int j = 1; j <= i; j++){
            if (fl < 0)  cout << 0;
            else       cout << fl;
        }

        for (int j = i + 1; j <= n; j++){
            if (fl < 0) cout << 1;
            else        cout << 0;
        }    
        cout << endl;
        fl =- fl;
    }


    return 0;
}
