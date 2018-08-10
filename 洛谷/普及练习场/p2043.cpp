/*************************************************************************
	> File Name: p2043.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月14日 星期四 23时16分35秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#define maxn 10000
using namespace std;

int a[maxn + 5] = {0};
int main(){
    int n,temp = 1;
    cin >> n;
    for(int i = 2;i <= n;i++){
        temp *= i;
        for(int j = 2; j <= temp;j++){
            while(temp% j == 0){
                temp /= j;
                a[j]++;
            }
        }

    }
    for(int i = 2; i<=n; i++){
        if(a[i]){
            printf("%d %d\n", i,a[i]);
        }
    }


    return 0;
}
