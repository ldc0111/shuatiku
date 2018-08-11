/*************************************************************************
	> File Name: euler002.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月29日 星期五 10时48分39秒
 ************************************************************************/

#include <iostream>
#include <inttypes.h>

#define maxn 4000000

using namespace std;

int32_t main(){
    int32_t a = 1, b = 2, c = 3, sum = 2;
    while (c <= maxn){
        if(c % 2 == 0){
            sum += c;
        }
        a = b;
        b = c;
        c = a + b;
    }
    cout << sum << endl;
    return 0;
}

