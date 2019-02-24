/*************************************************************************
	> File Name: euler049.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月16日 星期一 17时32分33秒
 ************************************************************************/

#include <stdio.h>

#define maxn 10000

int isprime[maxn + 5] = {0};
int prime[maxn + 5] = {0};
 void initprime(){
     for(int i = 2; i < maxn; i++){
         if(!isprime[i]){
             prime[++prime[0]] = i;
         }
         for(int j = 1; j <= prime[0]; j++){
             if(prime[j] * i > maxn) break;
             isprime[prime[j] * i] = 1;
             if(i % prime[j] == 0) break;
         }
     }
 }

int shi(int a,int b, int c){
    int arr[3][10] = {0};
    while(a){
        arr[0][a % 10]++;
        a /= 10;
    }
    while(b){
        arr[1][b % 10]++;
        b /= 10;
    }
    while(c){
        arr[2][c % 10]++;
        c /= 10;
    }
    for(int i = 0; i < 10; i++){
        if(arr[0][i] != arr[1][i] || arr[1][i] != arr[2][i]){
            return 0;
        }
    }
    return 1;
 }

int main(){
    initprime();
    int fl = 0;
    int a, b,c;
    for(int i = 1; i  < prime[0]; i++){
        if(prime[i] < 1000 || prime[i] == 1487) continue;
        for(int j = i + 1; j <= prime[0]; j++){
            int sum = prime[j] - prime[i];
            if(prime[j] + sum < maxn &&isprime[prime[j] + sum] == 0){
                fl = shi(prime[i], prime[j],prime[j] + sum);
                if(fl == 1){
                    a = prime[i]; b = prime[j]; c = prime[j] + sum;
                    break;
                }
            }
        }
        if(fl == 1) break;
    }
    printf("%d%d%d", a, b, c);
    return 0;
}
