/*************************************************************************
	> File Name: euler3018.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月29日 星期日 15时44分44秒
 ************************************************************************/


#include <stdio.h>


#define maxn 15

int keep[maxn + 5][maxn + 5] = {0};
int main(){
    FILE *fp = fopen("in","r");
    for(int i = 0; i < maxn; i++){
        for(int j = 0; j <= i; j++){
            fscanf(fp, "%d", keep[i] + j);
        }
    }

    for(int i = 1; i < maxn; i++){
        for(int j = 0; j <= i; j++){
            int max_num = 0;
            max_num = keep[i - 1][j];
            if(j > 0){
                max_num = max_num > keep[i - 1][j - 1] ? max_num :keep[i - 1][j - 1];
            }
            keep[i][j] += max_num;
        }
    }

    int ans = 0;
    for(int i = 0; i < maxn; i++){
        ans = ans > keep[maxn - 1][i] ? ans :keep[maxn - 1][i]; 
    }
    printf("%d\n",ans);

    return 0;
}
