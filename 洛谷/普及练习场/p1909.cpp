/*************************************************************************
	> File Name: p1909.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月05日 星期二 18时55分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int a, b;
    int misum = 100000000;
    
    cin >> n;
    for(int i = 0; i < 3; i++){
        cin >> a >> b;
        misum = min(n / a * b + (n % a == 0 ? 0 : 1)*b, misum);
    }

    cout << misum << endl;

    return 0;
}
