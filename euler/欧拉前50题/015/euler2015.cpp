/*************************************************************************
	> File Name: euler2015.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月29日 星期日 12时56分02秒
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b){
    if(!b)return a;
    return gcd(b, a % b);
}

int main(){
    long long  n = 1, m = 1;
    for(int i = 21; i <= 40; i++){
        n *= i;
        m *= (i - 20);
        int temp = gcd(n,m);
        n /= temp;
        m /= temp;
    }
    printf("%ld", n/m);
    return 0;
}
