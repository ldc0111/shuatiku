/*************************************************************************
	> File Name: p1161.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月03日 星期日 23时17分10秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n,t;
double a;
bool fl[100000000];

int main(){
   cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> t;
        for(int j = 1; j <= t; j++){
            fl[(int)(a * j)/1] = !fl[(int)(a * j)/1] ;
        }
    }
    for(int i = 1; i < 100000000; i++){
        if(fl[i] == true){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
