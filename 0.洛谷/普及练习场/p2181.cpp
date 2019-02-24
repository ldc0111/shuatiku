/*************************************************************************
	> File Name: p2181.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月09日 星期四 20时46分29秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(){
    unsigned long long n;
    cin >> n;
    cout << n * (n - 1) / 2 * (n - 2) / 3 * (n - 3)/4 << endl;
    return 0;
}
