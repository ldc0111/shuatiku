/*************************************************************************
	> File Name: euluer030.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月30日 星期六 15时51分52秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#define max_range 354294
using namespace std;

int is_valid(int x){
    int pre_x = x, sum = 0;
    while(x){
        sum += pow(x % 10, 5);
        x /= 10;
    }
    return pre_x == sum;
}


int main(){
    int sum = 0;
    for(int i = 2; i < max_range; i++){
        (is_valid(i) && (sum += i));
    }
    cout << sum << endl;

    return 0;
}
