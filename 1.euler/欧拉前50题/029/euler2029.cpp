/*************************************************************************
> File Name: euler2029.cpp
> Author:
> Mail: 
> Created Time: 2018年07月31日 星期二 11时08分30秒
************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 10000
#define MAX_M 210

int *result[MAX_N] = {0};
int ans = 0;

int find_result(int *num){
    for(int i = 0; i < ans; i++){
        if(memcmp(result[i], num, sizeof(int) * MAX_M)) continue;
        return i + 1;
    }
    return 0;
}

void calc_num(int a, int *temp){
    for(int j = 1; j <= temp[0];j++) temp[j] *= a;
    for(int j = 1; j <= temp[0]; j++){
        if(temp[j] < 10) continue;
        temp[j + 1] += temp[j]/10;
        temp[j] %= 10;
        temp[0] += (j == temp[0]);
    }
    return ;
}



int main(){
    for(int a = 2; a <= 100; a++){
        int *temp = (int *)calloc(sizeof(int), MAX_M);
        temp[0] = temp[1] = 1;
        calc_num(a,temp);
        for(int b = 2; b <= 100; b++){
            calc_num(a,temp);
            if(find_result(temp) == 0){
                result[ans] = (int *)malloc(sizeof(int) * MAX_M);
                memcpy(result[ans], temp, sizeof(int) * MAX_M);
                ans++;
            
            }
        }
        free(temp);
    }
    printf("%d\n", ans);
    return 0;
}
