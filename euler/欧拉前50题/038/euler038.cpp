/*************************************************************************
	> File Name: euler038.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月04日 星期三 20时17分07秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
bool ispandigital(int n, int *result){
    int num = 0, a[10] = {0};
    int ret = 0, i = 1, x;
    while(num < 9){
        x = n * i;
        while(x){
            if(x % 10== 0) return false;
            if(a[x % 10]) return false;
            a[x % 10] = (++num);
            x /= 10;
        }
        ret *= (int) pow(10, floor(log10(n * i)) + 1);
        ret += n * i;
        ++i;
    }
    (*result) = ret;
    return true;
}


int main(){
    bool flag;
    int num, max_num = 0;
    for(int i = 1; i < 10000; i++){
        if(!ispandigital(i, &num)) continue;
        if(num > max_num) max_num = num;

    }
    printf("%d\n", max_num);
    return 0;
}
