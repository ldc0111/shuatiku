/*************************************************************************
	> File Name: p1720.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月21日 星期一 20时00分53秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double n;
int main(){
    cin >> n;
    printf("%.2lf",((pow((((1 + sqrt(5))/2)),n)-pow((((1 - sqrt(5)))/2),n))/sqrt(5)));
    return 0;
}
