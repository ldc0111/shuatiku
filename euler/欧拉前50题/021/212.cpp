/*************************************************************************
	> File Name: 212.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年10月09日 星期二 16时47分56秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;

#define maxn 10000


int is_prime[maxn + 5] = {0};
int prime[maxn + 5] = {0};
int sum[maxn + 5] = {0};
int min_prime[maxn + 5] = {0};


void init(){
    for(int i = 2; i < maxn; i++) {
        if(!is_prime[i]) {
            prime[++prime[0]] = i;
            sum[i] = i + 1;
            min_prime[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++) {
            if(prime[j] * i > maxn) continue;
            is_prime[prime[j] * i] = 1;//标记合数
            if (i % prime[j]) {
                sum[i * prime[j]] = sum[i] * sum[prime[j]];
                min_prime[i * prime[j]] = 1;
            }else {
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
    for (int i = 1; i <= maxn; i++) {
        sum[i] -= i;
    }
    printf("%d\n",sum[284]);
    for (int i = 1; i <= maxn; i++) {
        if(sum[i] > maxn || sum[sum[i]] > maxn) continue;
        if(sum[i] != i && i == sum[sum[i]]) ans +=i;
    }
    printf("%ld", ans);
    return 0;
}
