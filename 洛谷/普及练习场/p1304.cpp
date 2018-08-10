/*************************************************************************
> File Name: p1304.cpp
> Author:
> Mail: 
> Created Time: 2018年06月06日 星期三 22时49分44秒
************************************************************************/

#include <iostream>
using namespace std;

int n;
bool is_prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(!(n % i)){
            return false;
        }
    }
    return true;
}
int main(){
    cin >> n;
    for(int k = 4; k <= n; k += 2){
        for(int i = 2; i < k; i++){
            if(is_prime(i) && is_prime(k - i)){
                cout << k << "=" << i << "+" << k - i << endl;
                break;
            }
        }
    }
    return 0;
}
