/*************************************************************************
	> File Name: euler037.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月04日 星期三 19时01分13秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define max_range 50000000
#define maxn 1000000

int isprime[max_range + 5] = {0};
int prime[max_range + 5] = {0};

void initprime(){
    isprime[0] = isprime[1] = 1;//判断个位时候的要用
    for(int i = 2; i < max_range; i++){
        if(!isprime[i]){
            prime[++prime[0]] = i;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_range) break;
            isprime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}
int iscirculatprime(int n){
    if(isprime[n] != 0) return false;
    int x = n, h;
    while(x){
        if(isprime[x] != 0)return false;
        x /= 10;
    }
    h = (int)pow(10,(floor(log10(n))));
    x = n;
    while(x){
        if(isprime[x] != 0) return false;
        x -=(x/h) * h;
        h /= 10;
    }
    return true;
}
int solve(){
    int many = 0, flag = 11;
    for(int i = 1; i <= prime[0]; i++){
        if(prime[i] < 10) continue;
        if(!iscirculatprime(prime[i])) continue;
        many += prime[i];
        //printf("%d\n", prime[i]);
        if(!(--flag)) break;
    }
    return many;
}

int main(){
    initprime();
    int sum = solve();
    printf("%d\n", sum);
    return 0;
}
