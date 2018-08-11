/*************************************************************************
> File Name: euler033.cpp
> Author:
> Mail: 
> Created Time: 2018年07月03日 星期二 21时01分43秒
************************************************************************/

#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(!b) return a;
    return gcd(b, a % b);
}
bool isNOtrivial(int x, int y){
    int x1,x2,y1,y2;
    x1 = x / 10, x2 = x % 10;//x1为取十位，x2为取个位
    y1 = y / 10, y2 = y % 10;//y1为取十位，y2为取个位
    if(!x2 ||!y2) return false;
    //根据有两个两位数所以可以分为4中情况，并且把除法式子化为乘法式子
    if(x1 == y1 && x2 * y == y2 * x) return true;
    if(x1 == y2 && x2 * y == y1 * x) return true;
    if(x2 == y2 && x1 * y == y1 * x) return true;
    if(x2 == y1 && x1 * y == y2 * x) return true;
    return false;
}

int main(){
    int x = 1, y = 1, c;
    for(int i = 10; i <= 100; i++){//模拟所有两位数又小于1的分数
        for(int j = i + 1; j <= 100; j++){
            if(isNOtrivial(i, j) == false) continue;
            x *= i; y *= j;
        }
    }
    c = gcd(x, y);//求最大公约数
    x /= c; y/= c;
    printf("%d\n", y);
    return 0;
}
