/*************************************************************************
	> File Name: euler032.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月03日 星期二 20时24分57秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int canadd[1000000] ={0};
int howmanydigs(int i, int j){
    int digs =0;
    digs += (int) floor(log10(i)) + 1;
    digs += (int) floor(log10(j)) + 1;
    digs += (int) floor(log10(i * j)) + 1;
    return digs;
}
bool progressone(int t, int *num){
    while (t){
        if(t % 10 == 0) return false;
        if(num[t % 10 - 1]) return false;
        num[t % 10 - 1] = 1;
        t /= 10;
    }
    return true;
}
bool ispandigital(int i, int j){

    int num[9] = {0};
    bool flag = true;
    flag = (flag && progressone(i,num));
    flag = (flag && progressone(j, num));
    flag = (flag && progressone(i * j, num));
    return flag;
}
int main(){
    int sum = 0, digs;
    for(int i = 2; i < 100; i++){
        for(int j = i + 1;; j++){
            digs = howmanydigs(i,j);
            if(digs < 9) continue;
            else if(digs > 9) break;
            if(ispandigital(i, j) && !canadd[i * j]){
                sum += (i * j);
                canadd[i * j] =  1;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
