/*************************************************************************
	> File Name: p4325.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月17日 星期四 20时24分53秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int a[42];

int main(){
    int aa;
    memset(a,0,sizeof(a));
    for(int i = 0; i< 10; i++){
        cin >> aa;
        a[aa%42] = 1;
    }
    int ans = 0;
    for(int i = 0; i< 42; i++){
        if(a[i] == 1){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
