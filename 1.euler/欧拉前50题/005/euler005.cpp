/*************************************************************************
	> File Name: euler005.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月30日 星期六 19时29分09秒
 ************************************************************************/

#include <stdio.h>
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int sum = 1;
    for (int i = 1; i <= 20; i++) {
        sum = sum /gcd(sum,i) * i;
    }
    printf("%d\n", sum);
    return 0;
}
