/*************************************************************************
	> File Name: p1469.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月06日 星期一 16时34分14秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define maxn 10000000
int n;
int a[maxn + 5] = {0};



int main(){/*
    cin >> n;
    for(int i = 0; i < n;i++){
        int temp = 0;
        cin >> temp;
        a[temp]++;
    }
    for(int i = 0; i < maxn;i++){
        if(a[i]%2){
                cout << i << endl;;
            return 0;
        }
    }
*/
    int n = 0;
    n ^= 1992;
    n ^= 1412;
    n ^= 1992;
    cout << n << endl;

    return 0;
}
