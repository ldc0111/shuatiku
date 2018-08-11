/*************************************************************************
	> File Name: euler050.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月13日 星期五 22时30分05秒
 ************************************************************************/

#include <stdio.h>



#define maxn 1000000

int isprime[maxn + 5] = {0};
int prime[maxn + 5] = {0};
int sum[maxn + 5] = {0};

int initprime(){//素数筛，筛掉出每个素数
    for(int i = 2; i < maxn; i++){//
        if(!isprime[i]){
            prime[++prime[0]] = i;

            for(int j = i * 2; j < maxn; j += i){
                isprime[j] = 1;
            }
        }
    }
    return 0;
}

int main(){
    initprime();
    for(int i = 1; i<= prime[0]; i++){//统计出来没个先ｎ项的和
        sum[i] = sum[i - 1] + prime[i];//加和
    }
    int maxnn = 21, maxp = 953;
    for(int i = 0; i <= prime[0]; i++){//从第几项开始
        for(int j = i + maxnn + 1; j <= prime[0]; j++){//长度，开始
            if(sum[j] - sum[i] >= maxn) break;//大于最大值返回
            if(isprime[sum[j] - sum[i]] == 0){//判断是不是素数
                maxnn = j - i;//改变最大值
                maxp = sum[j] - sum[i];//统计最大值
            }
        }
    }
    printf("%d %d\n", maxnn, maxp);//

    return 0;

}
