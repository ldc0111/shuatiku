/*************************************************************************
> File Name: euler.cpp
> Author:
> Mail: 
> Created Time: 2018年06月29日 星期五 16时47分52秒
************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

bool is_palindromic(int x){
    int high = pow(10,floor(log10(x)));
    while(high > 0){
        if(x / high != x % 10) return 0;
        x %= high;
        x /= 10;
        high /= 100;
    }
    return 1;
}

int main(){
    int max_palindromic = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            if(i * j > max_palindromic && is_palindromic(i*j)){
                max_palindromic = i * j;
                //cout << i * j << endl;
                //return 0;
            }
        }
    }
    cout << max_palindromic << endl;
    return 0;
}

