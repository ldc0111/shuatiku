/*************************************************************************
	> File Name: euler008.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月01日 星期日 17时28分45秒
 ************************************************************************/

#include <stdio.h>
#include "8.h"


int main(){
    long long max_p = 0, p = 1, zero_num = 0;
    for(int i = 0; str[i]; i++){
        if(i >= 13){
            if(str[i - 13] == '0'){
                zero_num--;
            }else{
                p /= (str[i - 13] - '0');
            }
        }
        if(str[i] == '0'){
            zero_num++;
        } else {
            p *= (str[i] - '0');
        }
        if(zero_num == 0 && i >= 12 && p > max_p){
            max_p = p;
        }
    }
    printf("%ld\n", max_p);
    return 0;
}
