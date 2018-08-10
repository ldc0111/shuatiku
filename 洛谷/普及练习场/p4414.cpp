/*************************************************************************
	> File Name: p4414.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月26日 星期六 18时23分25秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int a[3];
string str;
int main(){
    for(int i = 0;i < 3;i++){
        cin >> a[i];
    }
    cin >> str;
    if(a[0] > a[1]) swap(a[0], a[1]);
    if(a[0] > a[2]) swap(a[0], a[2]);
    if(a[1] > a[2]) swap(a[1], a[2]);
   
    for(int i = 0; i< 3;i++){
        cout << a[str[i] - 'A'] <<" ";
    }

    return 0;
}
