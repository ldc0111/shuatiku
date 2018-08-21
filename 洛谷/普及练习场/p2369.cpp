/*************************************************************************
	> File Name: p2369.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月20日 星期一 17时51分39秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
int n,m;
short int a[1000000] = {0};
int main(){
    cin >> m >> n;
    for(int i = 0;i < m; i++) cin >> a[i];
    sort(a,a + m);
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}



