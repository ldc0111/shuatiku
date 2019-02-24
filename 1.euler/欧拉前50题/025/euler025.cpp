/*************************************************************************
	> File Name: euler025.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月02日 星期一 20时40分20秒
 ************************************************************************/

#include <stdio.h>


int main(){
    int fib[3][1005] = {0};
    fib[0][0] = fib[0][1] = 1;
    fib[1][0] = fib[1][1] = 1;
    int n = 1;
    while(fib[n % 3][0] < 1000){
        n++;
        for(int i = 1; i <= fib[(n - 1) % 3][0]; i++){
            fib[n % 3][i] = fib[(n - 1) % 3][i] + fib[(n - 2) % 3][i];
        }
        fib[n % 3][0] = fib[(n - 1) % 3][0];
        for(int i = 1; i <= fib[n % 3][0]; i++){
            if(fib[n % 3][i] < 10) continue;
            fib[n % 3][i + 1] += fib[n % 3][i] / 10;
            fib[n % 3][i] = fib[n % 3][i] % 10;
            if(i == fib[n % 3][0]) fib[n % 3][0]++;
        }
    }
    printf("%d\n", n + 1);

    return 0;
}
