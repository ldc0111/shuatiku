/*************************************************************************
	> File Name: euler012.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月29日 星期日 11时16分20秒
 ************************************************************************/

#include <stdio.h>


#define maxn 100000

int prime[maxn + 5] = {0};
int num[maxn + 5] = {0};
int nnum[maxn + 5] = {0};


int init(){
    for(int i = 2; i * 2 < maxn; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            num[i] = 2;
            nnum[i] = 1;    
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > maxn) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0){
                nnum[i * prime[j]] = nnum[i] + 1;
                num[i * prime[j]] = num[i]/(nnum[i] + 1) * (nnum[i] + 2);
                break;
            }else{
                 nnum[i * prime[j]] = 1;
                 num[i * prime[j]] = num[i] * 2;
            }
        }
    }
    return 0;
}


int factor_nums(int n){
    if(n & 1){//奇数
        return num[(n + 1)/2] * num[n];
    }else {
        return num[n/2] * num[(n + 1)];
    }
}

int main(){
    init();
    int n = 1;
    while(factor_nums(n) < 500) n++;

    printf("%d", n * (n + 1) / 2);

    return 0;
}
