/*************************************************************************
	> File Name: euler010.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月01日 星期日 18时40分13秒
 ************************************************************************/

#include <stdio.h>

#define maxn 2000000
int prime[maxn + 5] = {0};
long long sum = 0;
int main(){
    for(int i = 2; i < maxn; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            sum +=  i;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > maxn) break;
            prime[prime[j] * i] = i;
            if(i % prime[j] == 0) break;
        }
    }
    printf("%ld\n", sum);
    return 0;
}

