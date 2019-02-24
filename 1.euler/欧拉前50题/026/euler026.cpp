/*************************************************************************
	> File Name: euler026.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月11日 星期三 17时31分04秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define maxn 1000

int rest[maxn] = {0};

int getlooplenth(int n){
    memset(rest, 0, sizeof(rest));
    int ret = 1 % n, ind = 1;
    while(rest[ret] == 0 && ret){
        rest[ret] = ind++;
        ret *= 10;
        ret %= n;
    }
    return ret ? ind - rest[ret] : 0;
}


int main(){
    int maxlen = 0, curlen, num;
    for(int i = 1; i <= maxn; i++){
        curlen = getlooplenth(i);
        if(curlen > maxlen){
            maxlen = curlen;
            num = i;
        }
    }
    printf("%d\n", num);
    return 0;
}
