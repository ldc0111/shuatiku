/*************************************************************************
> File Name: a.cpp
> Author: ldc
> Mail: litesla
> Created Time: 2018年08月25日 星期六 12时22分36秒
************************************************************************/

#include<iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define maxn 40000
int t;
int n,a,b,c;
int ar[maxn + 5][2] = {0};

void init(){
    for(int i = 1; i < 200 ; i++){
        for(int j = i + 1; j < 200&& j*j - i * i < 40000;j++){
            int b = 2 * i * j;
            int a = j * j - i *i;
            int c = j * j + i * i;
            if(ar[a][0] != 0) continue;
            ar[a][0] = b;
            ar[a][1] = c;
            for(int k = 2; k * a < maxn && ar[k * a][0] == 0; k++){
                ar[k * a][0] = k * b;
                ar[k * a][1] = k * c;
            }
        }
    }
}

int main(){
    init();
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &n, &a);
        if(n > 2 || n == 0){
            printf("-1 -1\n");
            continue;
        }
        if(n == 1){
            printf("1 %d\n", a + 1);
            continue;
        }
        if(ar[a][0] == 0){
            printf("-1 -1\n");
        }else{
            printf("%d %d\n", ar[a][0],ar[a][1]);
        }
    }
    return 0;

}
