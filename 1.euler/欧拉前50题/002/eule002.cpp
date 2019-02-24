/*************************************************************************
	> File Name: eule002.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月29日 星期五 11时46分42秒
 ************************************************************************/

#include <iostream>

#define maxn 4000000
using namespace std;


int main() {
    int fib[3] = {1, 2, 0};
    int sum = 2,i = 1;
    while(fib[i%3] <= maxn){
        i++;
        fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
        (fib[i % 3] % 2 == 0) && (sum += fib[i % 3]);
    }

    cout << sum << endl;

    return 0;
}
