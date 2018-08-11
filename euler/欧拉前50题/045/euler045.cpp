/*************************************************************************
	> File Name: euler045.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月05日 星期四 20时47分54秒
 ************************************************************************/

#include <stdio.h>

typedef long long (*calcfunc)(long long);

long long hexagonal(long long n){
    return n *(2 * n -1);
}
long long pentagonal(long long n){
    return n *(3 * n - 1) / 2;
}
long long triangle(long long n){
    return n *(n - 1) / 2;
}

bool valid(long long n,calcfunc f){
    long long mind = 1, maxn = n,mid;
    long long t;
    mid = (maxn + mind) >> 1;
    while(mind <= maxn){
        t = f(mid);
        if(t < n){
            mind = mid + 1;
        } else if(t > n){
            maxn = mid - 1;
        } else{
            return true;
        }
        mid = (mind + maxn) >> 1;
    }
    return false;
}



int main(){
    long long n = 143, t;
    while(1){
        ++n;
        t = hexagonal(n);
        if(valid(t,pentagonal) && valid(t, triangle)){
            printf("%d\n", t);
            return 0;
        }
    }
    return 0;
}
