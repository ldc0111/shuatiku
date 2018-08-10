/*************************************************************************
	> File Name: p2669.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月07日 星期四 21时35分25秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int k,sum = 0,da = 0;
    cin >> k;
    for(int i = 1;da < k ; i++){
        for(int j = 1; j <= i&& da < k; j++){
            sum += i;
            da++;
        }
    }
    cout << sum << endl;

    return 0;
}
