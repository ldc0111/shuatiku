/*************************************************************************
	> File Name: euler036.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月30日 星期六 18时35分10秒
 ************************************************************************/

#include <stdio.h>
int is_palindromic(int x, int base){
    int pre_x = x, num = 0;
    while(x){
        num = num * base + x % base;
        x /= base;
    }
    return pre_x == num;
}


int is_valid(int x){
    return is_palindromic(x, 2) && is_palindromic(x, 10);
}


int main(){
    int sum = 0;
    for(int i = 1; i < 1000000; i++){
        (is_valid(i) && (sum += i));
    }
    printf("%d\n", sum);

    return 0;
}
