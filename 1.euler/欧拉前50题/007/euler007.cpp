/*************************************************************************
	> File Name: euler007.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月01日 星期日 16时08分31秒
 ************************************************************************/

#include <stdio.h>
#define maxn 200000
int prime[maxn + 5] = {0};

int main(){
    for(int i = 2; i < maxn; i++){
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; prime[0]; j++){
            if(prime[j] * i > maxn) break;
            prime[prime[j] * i] = i;
            if(i % prime[j] == 0) break;
        }
    }

    printf("%d\n", prime[10001]);

    return 0;
}
