/*************************************************************************
> File Name: euler018.cpp
> Author:
> Mail: 
> Created Time: 2018年07月10日 星期二 18时25分28秒
************************************************************************/

#include <stdio.h>

int f[22][22] = {0};
int num[22][22] = {0};


int main(){
    FILE *fp = fopen("in", "r");
    for(int i = 0; i < 15; i++){
        for(int j = 0; j <= i; j++){
            fscanf(fp, "%d", &num[i][j]);
        }
    }
    for(int i = 0; i < 20; i++){
        f[19][i] = num[19][i];
    }

    for(int i = 18;i >= 0; i--){
        for(int j = 0;j <= i; j++){
            f[i][j] = (f[i + 1][j] > f[i + 1][j + 1]? f[i + 1][j] : f[i + 1][j + 1]) + num[i][j];
        }
    }
    printf("%d\n",f[0][0]);
    return 0;
}
