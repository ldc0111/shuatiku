/*************************************************************************
	> File Name: euler2026.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月31日 星期二 10时04分03秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define maxn 1000

int dnum[maxn] = {0};

int get_length(int d){
    int y = 1, n = 1;
    memset(dnum,0,sizeof(dnum));
    printf("1 / %d = 0.", d);

    while(y != 0 && dnum[y] == 0){
        printf("%d", y * 10 / d);
        dnum[y] = n;
        y = y * 10 % d;
        n += 1;
    }
    printf("(%d)\n", y ? n - dnum[y]: 0);
    return y ? n - dnum[y] : 0;
}



int main(){
    int max_length =  0,temp_length,ans;
    for(int i = 2; i < 1000; i++){
        temp_length = get_length(i);
        if(temp_length > max_length){
            max_length = temp_length;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
