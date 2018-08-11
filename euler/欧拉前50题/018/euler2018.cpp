/*************************************************************************
	> File Name: euler2018.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月29日 星期日 14时40分57秒
 ************************************************************************/

#include <stdio.h>

#define maxn 15

int arr[maxn + 5][maxn + 5] = {0};
int temp[maxn + 5][maxn + 5] = {0};
int solve(int i,int j){
    if(i >= maxn) return 0;//截止条件，超出范围
    if(temp[i][j]) return temp[i][j];//已经算过了

    int lnum = solve(i + 1,j), rnum = solve(i + 1, j + 1);//递归计算
    temp[i][j] = (lnum > rnum ? lnum : rnum) + arr[i][j];
    return temp[i][j];
}

int main(){
    FILE *fp = fopen("in","r");
    for(int i = 0; i < maxn; i++){//读入文件
        for(int j = 0;j <= i; j++){
            fscanf(fp,"%d", arr[i] + j);
        }
    }

    printf("%d", solve(0, 0));
    return 0;
}
