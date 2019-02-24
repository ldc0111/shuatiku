/*************************************************************************
	> File Name: euler.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月05日 星期四 20时14分30秒
 ************************************************************************/

#include <stdio.h>

long long  pentagonal(long long n){
    return n * (3 * n - 1) / 2;
}
bool ispentagonal(int n){
    long long  mind = 1, maxd = n, mid;
    long long t;
    mid = (mind + maxd) >> 1;
    while(mind <= maxd){
        t = pentagonal(mid);
        if(t < n){
            mind = mid + 1;
        }else if(t > n){
            maxd = mid - 1;
        }else{
            return true;
        }
        mid = (mind + maxd) >> 1;
    }
    return false;
}


int main(){
    long long d = 100000000;
    long long n = 1, m, p1, p2;
    while(1){
        p1 = pentagonal(n);
        p2 = pentagonal(n - 1);
        if(p1 - p2 > d) break;
        for(int m = n - 1; m >= 1; m--){
            p2 = pentagonal(m);
            if(p1 - p2  > d) break;
            if(ispentagonal(p1 + p2) && ispentagonal(p1 - p2)){
                d = p1 - p2;
            }
        }
        n++;
    }
    printf("%d\n", d);
    return 0;
}
