/*************************************************************************
> File Name: euler046.cpp
> Author:
> Mail: 
> Created Time: 2018年07月12日 星期四 18时16分59秒
************************************************************************/

#include <stdio.h>

#define maxn 10000

int isprime[maxn] = {0};

int main(){
    for(int i = 2; i < maxn; i++){
        if(!isprime[i]){//素数筛
            for(int j = 2 * i; j < maxn; j += i){//去掉每个合数
                isprime[j] = 1;
            }
        }
        if(i % 2 && isprime[i] == 1){//处理没个数
            int k;
            for(k = 1; 2 * k *k < i; k++){//看是否满足公式
                if(!isprime[i - 2 * k * k]) break;//如果满足就跳出循环
            }

            if(2 * k * k > i){//最后如果满足，一定２×K×K一定大于ｉ如果不满足，就小于，正常
                printf("%d\n", i);//输出，返回
                return 0;
            }
        }
    }
    return 0;
}
