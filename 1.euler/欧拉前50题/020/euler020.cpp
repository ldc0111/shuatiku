/*************************************************************************
	> File Name: euler020.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月10日 星期二 18时51分03秒
 ************************************************************************/

#include <stdio.h>

int sum[10000] = {0};

int main(){
    sum[0] = sum[1] = 1;
    for(int i = 1; i <= 100;i++){
        for(int j = 1; j <= sum[0]; j++){
            sum[j] *= i;
        }
        for(int j = 1; j <= sum[0]; j++){
            if(sum[j] < 1000)continue;
            sum[j + 1] += sum[j]/1000;
            sum[j] %= 1000;
            if(j == sum[0]) sum[0]++;
        }
    }
    printf("%d\n", sum[9]);
    int num = 0;
    for(int i = 1; i <= sum[0]; i++){
        while(sum[i]){
            num += sum[i] %  10;
            sum[i] /= 10;
        }
    }
    printf("%d\n", num);
    return 0;
}
