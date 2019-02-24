/*************************************************************************
	> File Name: euler047.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月12日 星期四 21时53分14秒
 ************************************************************************/

#include <stdio.h>

#define maxn 1000000

int prime[maxn + 5] = {0};
int a[maxn + 5] = {0};
int main(){
    for(int i = 2; i < maxn; i++){
        if(!prime[i]){
            prime[++prime[0]] =  i;
            a[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > maxn) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0){
                a[i * prime[j]] = a[i];
                break;
            }else {
                a[i * prime[j]] = a[i] + 1;
            }
        }
    }
    for(int i = 6; i <=maxn - 3; i++){
        if(a[i] != 4) continue;
        if(a[i + 1] != 4 || a[i + 2] != 4 || a[i + 3] != 4) continue;
        printf("%d\n", i);
        break;
    }

    return 0;
}
