/*************************************************************************
	> File Name: 23.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月03日 星期五 17时40分52秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define maxn 28123

int prime[maxn + 5] = {0};
int sum[maxn + 5] = {0};
int min_prime[maxn + 5] = {0};
int fl[maxn + 5] ={0};
int init(){
    for(int i = 2; i <maxn; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            sum[i] = i + 1;
            min_prime[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] >= maxn) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j]){
                sum[i * prime[j]] = sum[i] * sum[prime[j]];
                min_prime[i * prime[j]] = 1; 
            }else{
                min_prime[i * prime[j]] = min_prime[i] + 1;
                sum[i * prime[j]] = sum[i]/(1 - pow(prime[j],min_prime[i * prime[j]]))
                                  *(1 - pow(prime[j], min_prime[i * prime[j]] + 1));
                break;
            }
        }
    }
}


int main(){
    long long ans = 0;
    init();
    for(int i = 1; i < maxn; i++){
        sum[i] -= i;
        if(sum[i] > i){
            sum[++sum[0]] = i;
        }
    }
    printf("%d\n",sum[0]);
    for(int i = 1; i <= sum[0]; i++){
        for(int j = i; j <= sum[0]; j++){
            if(sum[i] + sum[j] > maxn) continue;
           fl[sum[i] + sum[j]] = 1;
        }
    }
    printf("%d\n", fl[24]);
    for(int i = 1; i <=maxn; i++){
        ans += i * (!fl[i]);
    }
    printf("%d\n", ans);
    return 0;
}
