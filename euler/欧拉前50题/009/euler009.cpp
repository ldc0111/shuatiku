/*************************************************************************
	> File Name: euler009.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月06日 星期五 17时14分02秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>


int main(){
    bool flag = true;
    int a, b, c, e;
    for(int i = 1; i < 32 && flag; i++){
        for(int j = i + 1; j <= 32 && flag; j++){
            a = j * j - i * i;
            b = 2 * i * j;
            c = i * i + j * j;
            if(1000 % (a + b + c) == 0){
                e = (int) pow(1000 / (a + b + c), 3);
                printf("%d\n",e * a * b * c);
                flag = false;
            }
        }
    }
    return 0;
}
