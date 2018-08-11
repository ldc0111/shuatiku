/*************************************************************************
	> File Name: euler015.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月09日 星期一 19时55分24秒
 ************************************************************************/

#include <stdio.h>

int main(){
    long long ans = 1, m = 20;
    for(int i = 40; i >= 21; i--){
        while(m && ans % m == 0) ans /= m,m--;
        ans *= i;
    }
    printf("%ld\n",ans);
    return 0;
}
