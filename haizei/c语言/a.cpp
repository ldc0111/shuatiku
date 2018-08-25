/*************************************************************************
	> File Name: a.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年08月25日 星期六 12时22分36秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;

int t;
int n,a,b,c;

int main(){
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> a;
        if(n > 2 || n == 0){
            cout << -1 <<" "<< -1 << endl;
            continue;
        }
        if(n == 1){
            cout << 1 << " " << a + 1 << endl;
            continue;
        }
        for(b = 1; (b + 1)*(b + 1) - b * b  <= a * a; b++){
            double c = sqrt(pow(a,n)+ pow(b,n));
            if((c - (int)c/1) == 0){
                cout << b << " "<< c << endl;
                break;
            }
        }
        
    }
    return 0;

}
