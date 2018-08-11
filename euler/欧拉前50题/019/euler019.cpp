/*************************************************************************
	> File Name: euler019.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月12日 星期四 22时23分37秒
 ************************************************************************/


#include <stdio.h>

int whichday(int y, int m, int d){
    if(m == 1 || m == 2){
        --y;
        m += 12;
    }
    int w;
    w = (d + 2 * m + 3 * (m + 1)/ 5
        + y + y / 4 - y / 100
        + y / 400) % 7;
    return w;
}

int main(){
    int sunday = 0;
    for(int y = 1901; y < 2001; y++){
        for(int m = 1; m <= 12; m++){
            if(whichday(y,m,1) == 6){
                ++sunday;
            }
        }
    }
    printf("%d", sunday);
    return 0;
}
