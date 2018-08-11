/*************************************************************************
	> File Name: euler006.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月29日 星期五 19时15分49秒
 ************************************************************************/

#include <iostream>
using namespace std;


int main(){
    int sum1  = 0, sum2 = 0,sum3 = 3 *99 + 99*(99-1) + 5050;
    for(int i = 1; i <= 100; i++){
        sum1 += i * i;
        sum2 += i;
    }

    cout << sum2 * sum2 - sum1 << endl;

    cout << sum2 * sum2 - sum3 << endl;
    return 0;
}
