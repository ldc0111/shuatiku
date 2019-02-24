/*************************************************************************
	> File Name: euler2045.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月29日 星期日 09时13分46秒
 ************************************************************************/

#include <stdio.h>


long long Triangle(long long x){
    return x * (x + 1) / 2;
}
long long Pentagonal(long long  x){
    return x * (3 * x - 1) / 2;
}
long long  Hexagonal(long long  x){
    return x * (2 * x - 1);
}

int binary_search(long long (*f)(long long ), long long  n, long long  x){
    int mind = 1, maxn = n, mid;
    while(mind <= maxn){
        mid = (mind + maxn) >> 1;
        if(f(mid) == x) return 0;
        if(f(mid) > x) maxn = mid - 1;
        else  mind = mid + 1;
    }
    return 1;
}

int main(){
    long long  n = 144;
    while(binary_search(Pentagonal, 2 * n, Hexagonal(n))) n++;

    printf("%ld", Hexagonal(n));
    
    return 0;
}
