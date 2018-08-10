/*************************************************************************
	> File Name: p1534.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月24日 星期四 19时29分52秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n;
int a,b;
int ans = 0;
int he = 0;
int main(){
    cin >> n;
    for(int i = 0 ;i < n;i++){
        cin >> a >> b;
        ans  = ans + a + b-8;
        he += ans;
    }
    cout << he;
    return 0;
}
