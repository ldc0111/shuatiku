/*************************************************************************
	> File Name: euler042.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月11日 星期三 19时55分43秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include "042.h"

bool isTriangNumber(int n){
    int m = (int) floor(sqrt(n * 2));
    return m * (m + 1)/ 2 == n;
}

int main(){
    int i = 0, sum = 0, total = 0;
    while(wordlist[i].length() != 0){
        sum = 0;
        for(int j = 0; j < wordlist[i].length(); j++){
            sum += wordlist[i][j] - 'A' + 1;
        }
        if(isTriangNumber(sum)) ++total;
        ++i;
    }
    printf("%d\n", total);

    return 0;
}
