/*************************************************************************
> File Name: euler035.cpp
> Author:
> Mail: 
> Created Time: 2018年07月04日 星期三 18时10分10秒
************************************************************************/

#include <stdio.h>
#include <math.h>

#define max_range 9999999
#define maxn 1000000

int isprime[max_range + 5] = {0};//标记所有素数
int prime[max_range + 5] = {0};//记录所有素数，//prime[0]记录素数的个数

void initprime(){
    for(int i =  2; i < max_range; i++){
        if(!isprime[i]){
            prime[++prime[0]] = i;//如果没有标记，则为素数且为，且素数个数加一
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i >= max_range) break;
            isprime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }

}
int iscircularprime(int n){
    if(isprime[n] != 0) return false;
    int x = n, h, j;
    h = (int)pow(10,floor(log10(n)));
    j = (int)(floor(log(n))) + 1;
    for(int i = 0; i < j; i++){
        x = x /10 + (x % 10) * h;
        if(isprime[x] != 0) return false;
    }
    return true;
}

int solve(){
    int many = 0;
    for(int i = 1; i <= prime[0]; i++){
        if(prime[i] > maxn) break;
        if(iscircularprime(prime[i])) many++;
    }
    return many;
}

int main(){
    initprime();
    int many = solve();
    printf("%d\n", many);
    return 0;
}
