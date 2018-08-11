/*************************************************************************
	> File Name: euler034.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月30日 星期六 16时39分28秒
 ************************************************************************/

#include <iostream>

#define maxn 2540160
using namespace std;

int num[10];
void init(){
    num[0] = 1;
    for(int i = 1; i < 10; i++){
        num[i] = i * num[i - 1];
    }
}
int is_curious(int x){
    int pre_x = x, sum = 0;
    while(x){
        sum += num[x % 10];
        x /= 10;
    }
    return sum == pre_x;
}


int main(){
    init();
    int sum = 0;
    for(int i = 3; i <= maxn; i++){
        (is_curious(i) && (sum += i));
    }

    cout << sum << endl;
    return 0;
}
