/*************************************************************************
> File Name: euler029.cpp
> Author:
> Mail: 
> Created Time: 2018年07月11日 星期三 18时09分41秒
************************************************************************/

#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define max_n 100

typedef struct{
    int num,times;
}intNode;

typedef struct{
    int p_num;
    intNode p[10];
}bigint;


int prime[max_n + 5] = {0};
int num_len;
bigint num[max_n * max_n];

void init(){
    for(int i = 2; i <= max_n; i++)
        if(!prime[i])
            for(int j = i; j <= max_n; j += i)
                if(!prime[j]) prime[j] = i;
    num_len = 0;
    memset(num, 0, sizeof(num));
}
void addBinInt(int a, int b){
    int times, pre_num, ind;
    while(a != 1){
        pre_num = prime[a];
        times = 0;
        while(prime[a] == pre_num){
            times++;
            a /= prime[a];
        }
        ind = num[num_len].p_num;
        num[num_len].p[ind].num = pre_num;
        num[num_len].p[ind].times = times * b;
        num[num_len].p_num++;

    }
    num_len++;
}

int cmp(const void *a, const void *b){
    return memcmp(a,b,sizeof(bigint));
}


int main(){
    init();
    for(int i = 2; i <= max_n; i++){
        for(int j = 2; j <= max_n; j++){
            addBinInt(i,j);
        }
    }
    qsort(num, num_len, sizeof(bigint), cmp);
    int total = 1;
    for(int i = 1; i < num_len; i++){
        if(memcmp(&num[i], &num[i - 1],sizeof(bigint)) == 0) continue;
        total++;
    }
    printf("%d\n", total);
    return 0;
}

