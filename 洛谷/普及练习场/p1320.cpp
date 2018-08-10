/*************************************************************************
	> File Name: p1320.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月27日 星期日 10时21分44秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
char c;
int n;
int d[40020],i = 1;
int main(){
    while(scanf("%c",&c)&& c >= '0'){
        i +=!(i&1^(c - '0')),d[i]++,  d[0]++;
    }
    while(~scanf("%c",&c)){
        if(c >= '0'){
            i+=!(i&1^(c - '0')),d[i]++;
        }
    }
    for(int j = 0; j <= i;j++){
        printf("%d ", d[j]);
    }
    return 0;
}
