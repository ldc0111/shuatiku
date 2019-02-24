/*************************************************************************
	> File Name: p1217.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年09月10日 星期一 14时10分26秒
 ************************************************************************/

#include<iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int a,b;
int ap[10]={0,1,11,101,1001,10001,100001,1000001,10000001,100000001};
int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n %i == 0)return 0;
    }
    return 1;
}
int hui(int n){
    int temp = n;
    int m = 0;
    while(temp){
        m = m * 10 + temp % 10;
        temp /= 10;
    }
    return m == n;
}

int main(){
    int aa,bb;
    cin >> a >> b;
    aa=floor(log10(a)) + 1;
    bb=floor(log10(b)) + 1;
    for(int i = aa; i <= bb; i++){
        if(i % 2 == 0) continue;
        else if(i == aa){
            for(int j = a; j <= ap[i + 1] && j <= b; j += 1){
                if(hui(j) && prime(j)) printf("%d\n", j);
            }
        }else if(i == bb){
            for(int j = ap[i]; j <= b; j += 2){
                if(hui(j) && prime(j)) printf("%d\n",j);
            }
        }else{
            for(int j= ap[i]; j <= ap[i + 1]; j += 2){
                if(hui(j) && prime(j)) printf("%d\n", j);
            }
        }
    }



    return 0;
}

