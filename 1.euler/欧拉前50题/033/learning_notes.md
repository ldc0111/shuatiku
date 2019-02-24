#### 题目大意

说实话没看懂，，，，，，，





#### 代码

````c++
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
    x1 = x / 10, x2 = x % 10;
    y1 = y / 10, y2 = y % 10;
    if(!x1 || !x2 || !y1 || !y2) return false;
    if(x1 == y1 && x2 * y == y2 * x && x2 != 0) return true;
    if(x1 == y2 && x2 * y == y1 * x && x2 != 0) return true;
    if(x2 == y2 && x1 * y == y1 * x && x1 != 0) return true;
    if(x2 == y1 && x1 * y == y2 * x && x1 != 0) return true;
    return false;
}

int main(){
    int x = 1, y = 1, c;
    for(int i = 10; i <= 100; i++){
        for(int j = i + 1; j <= 100; j++){
            if(isNOtrivial(i, j) == false) continue;
            x *= i; y *= j;
            c = gcd(x, y);
            x /= c; y/= c;
        }
    }
    printf("%d\n", y);
    return 0;
}

````





总结

除法判断转乘法

规范化，规范化，规范化，养成自己的风格，才是最好的，功能分开，分步解决效果最佳