/*************************************************************************
> File Name: euler040.cpp
> Author:
> Mail: 
> Created Time: 2018年07月17日 星期二 18时00分46秒
************************************************************************/

#include <stdio.h>
#include <math.h>


int a[7] = {1,10,100,1000,10000,100000,1000000};

int lago(int n,int wei,int temp){
    printf("%d %d\n", n, wei);
    n /= pow(10,wei - a[temp]);
    printf("%d\n", n % 10);
    return n % 10;
}

int main(){
    int fl = 1;
    int wei = 0, temp = 0;
    int sum = 1;
    for(int i = 1; i <= 1000000; i++){
        wei += log10(i) + 1;
        if(wei >= a[temp]){
            sum *= lago(i,wei,temp);
            temp++;
        }
        if(temp > 6){
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
