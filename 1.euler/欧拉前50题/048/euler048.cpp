/*************************************************************************
	> File Name: euler048.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月17日 星期二 17时04分22秒
 ************************************************************************/

#include <stdio.h>

#define maxn 10000000000
#define DIGS 100000
long long multimod(long long n, long long m){
    long long a,b,c,d, ans  = 0;
    a = n / DIGS; b = n % DIGS;
    c = m / DIGS; d = m % DIGS;
    ans = (ans + (a * DIGS) * d) % maxn;
    ans = (ans + (c * DIGS) * b) % maxn;
    ans = (ans + b * d) % maxn;

    return ans;
}

long long  quickmod(long n, long m){
    long long  ans = 1, temp = n;
    while(m){
        if(m % 2) ans = multimod(ans, temp);
        temp = multimod(temp,temp);
        m >>= 1;
    }
    return ans;
}

int main(){
    long long sum = 0;
    for(int i = 1; i < 1000; i++){
        sum = (sum + quickmod(i,i))% maxn;
    }
    printf("%ld", sum);

    return 0;
}
